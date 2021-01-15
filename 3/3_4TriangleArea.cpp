#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int t, n;
    int point[6];
    cin >> t;
    for(int i=0; i<t; i++){
        int area, signedArea; 
        int result;
        for(int j=0; j<6; j++){
            cin >> n;
            point[j]=n;
        }
        signedArea=((point[2]-point[0])*(point[5]-point[1])-(point[4]-point[0])*(point[3]-point[1]));
        area=abs(signedArea);
        if(signedArea<0){
            result=-1;
        }
        else if(signedArea>0){
            result=1;
        }
        else{
            result=0;
        }
        cout << area << " " << result << endl;
        
    }
    return 0;
}