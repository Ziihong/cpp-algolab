#include <iostream>
#include <cstdlib>
using namespace std;

struct Coordinate{
public:
    int x, y;
};

int main(){
    int t, n, number;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        Coordinate array[n];
        int idx=0;
        for(int j=0; j<2*n; j++){
            cin >> number;
            if(j%2==0) array[idx].x=number;
            else {
                array[idx].y=number;
                idx++;
            }
        }
        long area=0; int dir;
        for(int current=0; current<n; current++){
            int next=(current+1)%n;
            area+=array[current].x*array[next].y-array[next].x*array[current].y;
        }
        if(area>0) dir=1;
        else dir=-1;
        cout << abs(area) << " " << dir << endl;
    }
    return 0;
}