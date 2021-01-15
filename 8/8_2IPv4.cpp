#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int t, k;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> k;
        if(k==1){
            string input; cin >> input; 
            string data="", ipv4[4];
            int bit[32]={0}, idx=3;
            for(int j=0; j<input.length(); j++){
                if(input.at(j)=='.'){
                    ipv4[idx--]=data;
                    data="";
                }
                else data+=input.at(j);
            }
            ipv4[idx]=data;
            int pos=0;
            for(int j=0; j<4; j++){
                int num=stoi(ipv4[j]);
                for(int k=0; k<8; k++){
                    bit[pos++]=num%2;
                    num/=2;
                }
            }
            unsigned long int decimal=0;
            for(int j=0; j<32; j++){
                if(bit[j]==1) decimal+=pow(2,j);
            }
            cout << decimal << endl;
        }
        else if(k==2){
            unsigned long int number;
            cin >> number;
            int bit[4][8]={0}, idx=0;
            for(int j=0; j<4; j++){
                for(int k=0; k<8; k++){
                    bit[j][k]=number%2;
                    number/=2;
                }
            }
            int toIPv4[4], pos=3;
            for(int j=0; j<4; j++){
                int data=0;
                for(int k=0; k<8; k++){
                    if(bit[j][k]==1) data+=pow(2,k);
                }
                toIPv4[pos--]=data;
            }
            for(int j=0; j<4; j++){
                cout << toIPv4[j];
                if(j!=3) cout << '.';
                else if(j==3) cout << '\n';
            }
        }
    }
    return 0;
}