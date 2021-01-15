#include <iostream>
using namespace std;

int ccw(int a[2], int b[2], int c[2]){ //세 점 시계방향->- 세 점 일직선->0 세 점 반시계 방향->+
    int signedArea, answer;
    signedArea=((b[0]-a[0])*(c[1]-a[1])-(c[0]-a[0])*(b[1]-a[1]))/2;
    if(signedArea<0) answer=-1;
    else if(signedArea>0) answer=1;
    else answer=0;
    return answer;
}
int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        int a[2], b[2], c[2], d[2], result;
        int j=0;
        while(j<8){
            cin >> n;
            if(j<2) a[j]=n;
            else if(j<4) b[j%2]=n;
            else if(j<6) c[j%2]=n;
            else d[j%2]=n;
            j++;
        }
        int ccw1, ccw2, ccw3, ccw4; //ccw1=>a,c,b ccw2=>a,d,b ccw3=>c,a,d ccw4=>c,b,d
        ccw1=ccw(a, c, b);
        ccw2=ccw(a, d, b);
        ccw3=ccw(c, a, d);
        ccw4=ccw(c, b, d);

        if(ccw1*ccw2<0){
            if(ccw3*ccw4<0){
                result=1;
            }
            else if(ccw3*ccw4==0){
                result=2;
            }
            else {
                result=0;
            }
        }
        else if(ccw1*ccw2==0){
            if(ccw3*ccw4<=0){
                result=2;
            }
            else{
                result=0;
            }
        }
        else{
            result=0;
        }
        cout << result << endl;
    }
    return 0;
}