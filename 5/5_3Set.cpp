#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, n, number;
    cin >> t; 
    for(int i=0; i<t; i++){
        int setArray1[132]={0}, setArray2[132]={0};
        for(int j=0; j<2; j++){
            cin >> n;
            for(int k=0; k<n; k++){
                cin >> number;
                if(j==0) setArray1[number]=1;
                else setArray2[number]=1;
            }
        }
        vector<int> inter, sum, sub;
        for(int j=0; j<132; j++){
            //cout << setArray1[j] << " " << setArray2[j] << "<<<<<<<<<";
            if(setArray1[j]==1){
                if(setArray2[j]==1) inter.push_back(j);
                else sub.push_back(j);
                sum.push_back(j);
            }
            else{
                if(setArray2[j]==1) sum.push_back(j);
            }
        }
        cout << inter.size() << " ";
        for(int k=0; k<inter.size(); k++){
            cout << inter[k] << " ";
        }
        cout << endl;
        cout << sum.size() << " ";
        for(int k=0; k<sum.size(); k++){
            cout << sum[k] << " ";
        }
        cout << endl;
        cout << sub.size() << " "; 
        for(int k=0; k<sub.size(); k++){
            cout << sub[k] << " ";
        }
        cout << endl;
    }
    return 0;
}