#include <iostream>
using namespace std;

int main(){
    int t, row, col, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> row >> col;
        int matrix[row][col], matrix2[row][col];
        int m=1;
        while(m<=2){
            for(int r=0; r<row; r++){
                for(int c=0; c<col; c++){
                    cin >> n;
                    if(m==1) matrix[r][c]=n;
                    else matrix[r][c]+=n;
                }
            }
            m++;
        }
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                cout << matrix[j][k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}