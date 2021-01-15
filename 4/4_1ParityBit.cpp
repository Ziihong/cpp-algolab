#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int size=32, count=0; int bit=size;
        int bitArray[32]={};//c++에서 배열의 크기는 상수로 선언. 변수로 선언x
        while(n!=0){
            bitArray[--bit]=n%2; //MST부터 저장
            if(bitArray[bit]==1){
                count++;
            }
            n=n/2;
        }
        if(count%2==0) bitArray[0]=0;
        else bitArray[0]=1;

        unsigned int result=0;
        for(int j=0; j<size; j++){
            if(bitArray[j]==1){
                result+=pow(2, size-1-j);
            }
        }
        cout << result << endl;

    }
    return 0;
}