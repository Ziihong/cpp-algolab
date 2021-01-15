#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int groups[10*10];
int group_id=0;
void dfs(int R, int C, int r, int c){
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    int next_r, next_c;
    visited[r][c]==1;
    groups[group_id]++;

    for(int idx=0; idx<4; idx++){
        next_r=r+dx[idx];
        next_c=c+dy[idx];
        
        if(0<=next_r && next_r<R && 0<=next_c && next_c<C){
            if(room[next_r][next_c]=='.' && visited[next_r][next_c]==0){
                dfs(R, C, next_r, next_c);
            }
        }
    }
}


int main(){
    int t, R, C; string s;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> C >> R;
        char room[R][C];
        int visited[R][C];
        for(int r=0; r<R; r++){
            cin >> s;
            for(int c=0; c<C; c++){
                room[r][c]=s.at(c);
                visited[r][c]=0;
            }
        }
         
        vector<int> v;
        for(int r=0; r<R; r++){
            for(int c=0; c<C; c++){
                if(room[r][c]=='.' && visited[r][c]==0){
                    group_id++;
                    dfs(R, C, r, c);
                }
            }
        }
        
        for(int k=1; k<=v.size(); k++){
            cout << v[k] << " ";
        }
       
                   
    }
    return 0;
}