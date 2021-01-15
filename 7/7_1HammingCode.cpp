#include <iostream>
#include <math.h>
using namespace std;

int evenParity(int *array, int num){
    int idx=num-1, bitCount=0, parity=0;
    while(idx<32){
        for(int j=0; j<num; j++){
            if(array[idx]==1 && idx!=num-1) bitCount++;
            idx++;
        }
        for(int j=0; j<num; j++){
            idx++;
        }
    }
    if(bitCount%2!=0) parity=1;
    return parity;
}

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int k, n;
        cin >> k >> n;

        int Data_toHamming[32]={0};
        int Hamming_toData[32]={0};
        int dataArray[32]={0};

        if(k==0){
            int idx=0;
            while(n!=0){
                if(idx==0 || idx==1 || idx==3 || idx==7 || idx==15){
                    Data_toHamming[idx]=5;
                }
                else{
                    Data_toHamming[idx]=n%2;
                    n/=2;
                }
                idx++;
            }
            Data_toHamming[0]=evenParity(Data_toHamming, 1);
            Data_toHamming[1]=evenParity(Data_toHamming, 2);
            Data_toHamming[3]=evenParity(Data_toHamming, 4);
            Data_toHamming[7]=evenParity(Data_toHamming, 8);
            Data_toHamming[15]=evenParity(Data_toHamming, 16);

            int hammingCode=0;
            for(int j=0; j<32; j++){
                if(Data_toHamming[j]==1){
                    hammingCode+=pow(2, j);
                }
            }
            cout << hammingCode << endl;
        }

        else if(k==1){
            int idx=0;
            while(n!=0){
                Hamming_toData[idx]=n%2;
                n/=2;
                idx++;
            }
            int P1, P2, P4, P8, P16;
            P1=evenParity(Hamming_toData, 1);
            P2=evenParity(Hamming_toData, 2);
            P4=evenParity(Hamming_toData, 4);
            P8=evenParity(Hamming_toData, 8);
            P16=evenParity(Hamming_toData, 16);
            int parityArray[5]={P1, P2, P4, P8, P16};
            int errorCheckArray[5]={Hamming_toData[0], Hamming_toData[1], Hamming_toData[3], Hamming_toData[7], Hamming_toData[15]};

            int errorCount=0, error=0;
            for(int j=0; j<5; j++){
                if(parityArray[j]!=errorCheckArray[j]) {
                    errorCount++;
                    error+=pow(2, j);
                }
            }
            if(errorCount>1){
                if(Hamming_toData[error-1]==1) Hamming_toData[error-1]=0;
                else if(Hamming_toData[error-1]==0) Hamming_toData[error-1]=1;
            }
            int index=0;
            for(int j=0; j<32; j++){
                if(j!=0 && j!=1 && j!=3 && j!= 7 && j!= 15 && j!=31){
                    dataArray[index]=Hamming_toData[j];
                    index++;
                }
            }
            int data=0;
            for(int j=0; j<32; j++){
                if(dataArray[j]==1) data+=pow(2, j);
            }
            cout << data << endl;
        }
    }
    return 0;
}