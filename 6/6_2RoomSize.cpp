#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int t, R, C; string str;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> C >> R;
        char room[R][C];
        int visited[R][C];
        int group_id=-1; 
        int groups[10*10]={0};
        int row, col, next_r, next_c;
        for(int r=0; r<R; r++){
            cin >> str;
            for(int c=0; c<C; c++){
                room[r][c]=str.at(c);
                visited[r][c]=0;
            }
        }


        stack<pair<int,int>> s; int size;
        vector<int> v;
        for(int r=0; r<R; r++){
            for(int c=0; c<C; c++){
                if(room[r][c]=='.' && visited[r][c]==0){
                    int size=0;
                    s.push(make_pair(r,c));
                    visited[r][c]=1;
                    size++;

                    while(!s.empty()){
                        row=s.top().first;
                        col=s.top().second;
                        s.pop();
                        int dx[]={-1,0,1,0};
                        int dy[]={0,1,0,-1};
                        for(int idx=0; idx<4; idx++){
                            next_r=row+dx[idx];
                            next_c=col+dy[idx];

                            if(0<=next_r && next_r<R && 0<=next_c && next_c<C){
                                if(room[next_r][next_c]=='.' && visited[next_r][next_c]==0){
                                    visited[next_r][next_c]=1;
                                    size++;
                                    s.push(make_pair(r,c));
                                    s.push(make_pair(next_r, next_c));
                                }
                            }
                        }
                    }
                    v.push_back(size);
                }
            }
        }
        cout << v.size() << endl;
        int array[v.size()];
        for(int k=0; k<v.size(); k++){
            array[k]=v[k];
        }
        sort(array, array+v.size());
        for(int k=v.size()-1; k>=0; k--){
            cout << array[k] << " ";
        }             
        cout << endl; 
    }
    return 0;
}