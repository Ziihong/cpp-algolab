#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        int a[4];
        int b[4];
        for(int j=0; j<4; j++){
            cin >> n;
            a[j]=n;
        }
        for(int k=0; k<4; k++){
            cin >> n;
            b[k]=n;
        }
        if(a[0]==a[2]){ //수직, 수평으로 입력 받을 때
            int constant_x=a[0];
            int constant_y=b[1];
            if(b[0]>b[2]){
                int temp_x=b[0];
                b[0]=b[2];
                b[2]=temp_x;
            }
            if(a[1]>a[3]){
                int temp_y=a[1];
                a[1]=a[3];
                a[3]=temp_y;
            }
            int result;
            if(constant_x<b[0] || b[2]<constant_x){
                result=0;
            }
            else if(constant_x==b[0] || constant_x==b[2]){
                if(constant_y<a[1] || a[3]<constant_y){
                    result=0;
                }
                else{
                    result=2;
                }
            }
            else{
                for(int point=b[0]; point<=b[2]; point++){
                    if(constant_x==point){
                        if(a[3]<constant_y || constant_y<a[1]){
                            result=0;
                        }
                        else{
                            if(constant_y==a[1] || constant_y==a[3]){
                                result=2;
                            }
                            else{
                                result=1;
                            }
                        }
                        break;
                    }
                }
            }
            cout << result << endl;
        }
        else if(a[1]==a[3]){ //수평, 수직으로 입력 받을 때
            int constant_y=a[1];
            int constant_x=b[0];
            if(a[0]>a[2]){
                int temp_y=a[0];
                a[0]=a[2];
                a[2]=temp_y;
            }
            if(b[1]>b[3]){
                int temp_x=b[1];
                b[1]=b[3];
                b[3]=temp_x;
            }
            int result;
            if(constant_y<b[1] || b[3]<constant_y){
                result=0;
            }
            else if(constant_y==b[1] || constant_y==b[3]){
                if(a[2]<constant_x || constant_x<a[0]){
                            result=0;
                }
                else{
                    result=2;
                }
            }
            else{
                for(int point=b[1]; point<=b[3]; point++){
                    if(constant_y==point){
                        if(a[2]<constant_x || constant_x<a[0]){
                            result=0;
                        }
                        else{
                            if(constant_x==a[0] || constant_x==a[2]){
                                result=2;
                            }
                            else{
                                result=1;
                            }
                        }
            
                    }
                }
            }
            cout << result << endl;
        }
    }

    return 0;
}