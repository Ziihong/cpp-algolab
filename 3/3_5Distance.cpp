#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        int square[4];
        for(int j=0; j<4; j++){
            cin >> n;
            square[j]=n;
        }
        int x, y, x2, y2;
        cin >> x >> y;
        int distance, right_distance;
        if(square[0]<=x && x<=square[2]){
            if(square[1]<=y && y<=square[3]){
                distance=0;
                right_distance=0;
            }
            else{
                if(y<square[1]){
                    y2=square[1];
                }
                else if(y>square[3]){
                    y2=square[3];
                }
                distance=pow((y2-y),2);
                right_distance=abs(y2-y);
            }
        }
        else{
            if(x<square[0]){
                x2=square[0];
            }
            else if(x>square[2]){
                x2=square[2];
            }
            if(square[1]<=y && y<=square[3]){
                distance=pow((x2-x),2);
                right_distance=abs(x2-x);
            }
            else{
                if(y<square[1]){
                    y2=square[1];
                }
                else if(y>square[3]){
                    y2=square[3];
                }
                distance=pow((x2-x),2)+pow((y2-y),2);
                right_distance=abs(x2-x)+abs(y2-y);
            }
        }       
        cout << distance << " " << right_distance << endl;
    }
    return 0;
}

