#include <iostream>
using namespace std;

int main(){
    int t, count, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> count;
        int number[count];
        for(int j=0; j<count; j++){
            cin >> n;
            number[j] = n;
        }
        int max = number[0];
        int min = number[0];
        for(int j=0; j<count; j++){
            if(number[j] > max){
                max = number[j];
            }
            if(number[j] < min){
                min = number[j];
            }
        }
        cout << max << " " << min << endl;        
    }
    return 0;
}