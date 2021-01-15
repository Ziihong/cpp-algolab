#include <iostream>
using namespace std;
int main(){
    int testCase, R, S, T, number;
    cin >> testCase;
    for(int i=0; i<testCase; i++){
        cin >> R >> S >> T;
        int matrix1[R][S];
        int matrix2[S][T];
        int matrixMuli[R][T];
        for(int r=0; r<R; r++){
            for(int s=0; s<S; s++){
                cin >> number;
                matrix1[r][s]=number;
            }
        }
        for(int s=0; s<S; s++){
            for(int t=0; t<T; t++){
                cin >> number;
                matrix2[s][t]=number;
            }
        }
        for(int t=0; t<T; t++){
            for(int r=0; r<R; r++){
                int sum=0;
                for(int s=0; s<S; s++){
                    sum+=matrix1[r][s]*matrix2[s][t];
                }
                matrixMuli[r][t]=sum;
            }
        }
        for(int j=0; j<R; j++){
            for(int k=0; k<T; k++){
                cout << matrixMuli[j][k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}