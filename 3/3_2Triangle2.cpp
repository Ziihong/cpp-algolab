#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        int coor[6];
        for(int j=0; j<6; j++){
            cin >> n;
            coor[j]=n;
        }
        int a, b, c;
        a=pow((coor[0]-coor[2]),2)+pow((coor[1]-coor[3]),2);
        b=pow((coor[2]-coor[4]),2)+pow((coor[3]-coor[5]),2);
        c=pow((coor[4]-coor[0]),2)+pow((coor[5]-coor[1]),2);
        int length[]={a, b, c};
        sort(length, length+3); //정렬 첫번째 인자=>배열의 포인터 두번째 인자=>배열 끝나는 지점=배열의 포인터+배열의 크기
        if(sqrt(length[2])>=sqrt(length[0])+sqrt(length[1])){
            cout << 0 << endl;
        }
        else if(length[2]==length[0]+length[1]){
            cout << 1 << endl;
        }
        else if(length[2]>length[0]+length[1]){
            cout << 2  << endl;
        }
        else if(length[2]<length[0]+length[1]){
            cout << 3 << endl;
        }
        
    }
    return 0;
}