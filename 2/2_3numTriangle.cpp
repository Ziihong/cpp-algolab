#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int number=1;
        for(int j=0; j<n; j++){
            cout << number << " ";
            int gap=n-1;
            int number2 = number;
            for(int k=0; k<j; k++){
                number2+=gap;
                cout << number2<< " ";
                gap--;
            }
            number++;
            cout << endl;
        }
    }
    return 0;
}