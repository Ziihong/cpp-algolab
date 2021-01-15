#include <iostream>
using namespace std;

int main(){
    int t, number;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> number;
        int result=1;
        for(int j=2; j<number; j++){
            if(number%j==0){
                result=0;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}