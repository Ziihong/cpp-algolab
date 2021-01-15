#include <iostream>
using namespace std;

int main(){
    int t, m ,M;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> m >> M;
        int sum = 0;
        for(int j=m; j<=M; j++){
            sum += j;
        }
        cout << sum << endl;
    }
    return 0;
}