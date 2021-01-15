#include <iostream>
using namespace std;

int main(){
    int t, n, number;
    cin >> t;
    for(int i=0; i<t; i++){
        int multiply = 1;
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> number;
            multiply *= number;
            multiply %=10;
        }
        cout << multiply%10 <<endl;
    }
    return 0;
}