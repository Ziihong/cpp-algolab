#include <iostream>
using namespace std;

int main(){
    int t, number;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> number;
        int count=0; //행의 개수
        for(int j=0; j<number; j++){//한 행 안에서
            if(j>=number/2){ 
                count=number-1-j;
            }
            int blank=0;
            while(blank<count){
                cout << "-";
                blank++;
            }
            for(int k=0; k<number-2*blank; k++){                
                if(k%2==0){
                    cout << "*";
                }
                else if(k%2==1){
                    cout << "+";                    
                }          
            }
            blank=0;
            while(blank<count){
                cout << "-";
                blank++;
            }
            cout << endl;
            count++;
        }
    }
    return 0;
}