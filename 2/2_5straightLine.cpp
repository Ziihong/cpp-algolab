#include <iostream>
using namespace std;

int main(){
    int t, number;
    cin  >> t;
    for(int i=0; i<t; i++){
        cin >> number;
        for(int k=0; k<number; k++){
            for(int j=0; j<number; j++){
                if(k==number/2){
                    if(j==number/2){
                        cout << "O";
                    }
                    else{
                        cout << "+";
                    }
                }
                else{
                    if(j==number/2){
                        cout << "I";
                    }
                    else if(j==number-(k+1)){
                        cout << "*";
                    }
                    else{
                        cout << ".";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}