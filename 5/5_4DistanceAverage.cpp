#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t, n, number, unit;
    cin >> t;
    for(int i=0; i<t; i++){
        vector<int> distance, average;
        cin >> number;
        for(int j=0; j<number; j++){
            cin >> n;
            distance.push_back(n);
        }
        cin >> unit;
        int count = number-unit+1;
        cout << count << " ";
        for(int k=0; k<count; k++){
            int sum=0;
            for(int h=k; h<unit+k; h++){
                sum+=distance[h];
            }
            cout << sum/unit << " ";
        }
        cout << endl;

    }
    return 0;
}