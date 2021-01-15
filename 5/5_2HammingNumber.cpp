#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    unsigned int hamming[7410];
    int idx=0; double result;
    for(int i=0; i<13; i++){
        for(int j=0; j<19; j++){
            for(int k=0; k<30; k++){
                result=pow(2,k)*pow(3,j)*pow(5,i);
                hamming[idx++]=(int)result;
                //cout << k << " " << j << " " << i << " " << result << endl;
            }
        }
    }
    sort(hamming, hamming+7410);

    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cout << hamming[n-1] << endl;
    }
    return 0;
}