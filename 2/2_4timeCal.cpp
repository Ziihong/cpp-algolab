#include <iostream>
using namespace std;

int main(){
    int t, number, H, M, S, h, m, s;
    cin >> t;
    int day, hour, minute, second;
    for(int i=0; i<t; i++){
        cin >> number;
        long start = 0;
        long end = 0;
        long workingTime = 0;
        for(int j=0; j<number; j++){
            cin >> H >> M >> S >> h >> m >> s;
            start += H*60*60 + M*60 + S;
            end += h*60*60 + m*60 + s;
        }
        workingTime = end-start;

        second = workingTime%60;
        minute = (workingTime/60)%60;
        hour = ((workingTime/60)/60)%24;
        day = ((workingTime/60)/60)/24;
        cout << day << " " << hour << " " << minute << " " << second << endl;

    }

    
    return 0;
}