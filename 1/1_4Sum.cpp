#include <iostream>
using namespace std;

int main(){
    int t, count, number, sum;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> count;
        sum = 0;
        for(int j=0; j<count; j++){
            cin >> number;
            sum += number;
        }
        cout << sum << endl;
    }
    return 0;
}