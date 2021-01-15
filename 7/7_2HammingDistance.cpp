#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, num1, num2;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> num1 >> num2;
        int num1Binary[31]={0}, num2Binary[31]={0};
        int num1_hamming=0, num2_hamming=0, hamming_distance=0;
        int idx=0;
        while(num1!=0){
            num1Binary[idx]=num1%2;
            num1/=2;
            idx++;
        }
        idx=0;
        while(num2!=0){
            num2Binary[idx]=num2%2;
            num2/=2;
            idx++;
        }
        for(int j=0; j<31; j++){
            if(num1Binary[j]==1) num1_hamming++;
            if(num2Binary[j]==1) num2_hamming++;
            if(num1Binary[j] != num2Binary[j]) hamming_distance++;
        }
        cout << num1_hamming << " " << num2_hamming << " " << hamming_distance << endl;
    }
    return 0;
}