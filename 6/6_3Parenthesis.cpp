#include <iostream>
#include <stack>
#include <string>
using namespace std;

int match(char c1, char c2){
    int result;
    if(c1=='(' && c2==')') result=1;
    else if(c1=='{' && c2=='}') result=1;
    else if(c1=='[' && c2==']') result=1;
    else result=0;
    return result;
}
int main(){
    int t; string str; char c; 
    int result;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> str;
        stack<int> s;
        for(int j=0; j<str.length(); j++){
            if(str.at(j)=='(' || str.at(j)=='{' || str.at(j)=='['){
                s.push(str.at(j));
            }
            else if(str.at(j)==')' || str.at(j)=='}' || str.at(j)==']'){
                if(s.empty()){
                    result=0;
                    break;
                }
                else{
                    c=s.top(); s.pop();
                    if(match(c, str.at(j))){
                        result=1;
                    }
                    else{
                        result=0;
                        break;
                    }
                }
            }
        }
        if(!s.empty()) result=0;
        cout << result  << endl;
    }
    return 0;
}