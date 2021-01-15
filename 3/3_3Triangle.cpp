#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        int length[3];
        for(int j=0; j<3; j++){
            cin >> n;
            length[j]=n;
        }
        sort(length, length+3);
        if(length[2]>=length[0]+length[1]){
            cout << 0 << endl;
        }
        else if(length[0]==length[1] && length[1]==length[2] && length[2]==length[0]){
            cout << 1 << endl;
        }
        else if(pow(length[2],2)==(pow(length[0],2)+pow(length[1],2))){
            cout << 2 << endl;
        }
        else if((length[0]==length[1] && length[0]!=length[2]) || (length[1]==length[2]) && length[0]!=length[1]){
            cout << 3 << endl;
        }
        else{
            cout << 4 << endl;
        }

    }
    return 0;
}