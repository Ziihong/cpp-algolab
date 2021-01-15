#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    string input;
    cin >> t;
    for(int i=0; i<t; i++){
        int answer=1; string array[4];
        cin >> input;
        int idx=0, count=0; string data="";
        for(int j=0; j<input.length(); j++){
            if(input.at(j)=='-'){
                count++;
                if(count>3) { //4부분보다 많이 나뉘어져 있을 때
                    answer=0;
                    break;
                }
                if(data.length()==0) answer=0; //data길이 0일 때
                array[idx++]=data;
                data="";
            }
            else if(input.at(j)=='X' && j==input.length()-1) data+='X'; //마지막이 'X'일 때
            else if(!isdigit(input.at(j))) {
                answer=0;
                break;
            }
            else data+=input.at(j);
        }
        array[idx]=data; //마지막 data.

        if(count!=3) answer=0; // 4부분보다 조금 나뉘어져있을 때

        if(answer!=0){ //길이가 초과일 때
            if(array[0].length()>5 || array[1].length()>7 || array[2].length()>6 ||array[3].length()!=1) answer=0;
        }

        int number[10], multi=10, sum=0, pos=0;
        //제대로된 입력으로 정수 배열에 저장, sum구하기
        if(answer!=0){
            for(int j=0; j<4; j++){
                for(int k=0; k<array[j].length(); k++){
                    number[pos++]=array[j].at(k)-'0';
                    if(pos<=9){
                        sum+=(array[j].at(k)-'0')*multi--;
                    }
                }
            }
            int rest=0;
            for(int n=0; n<11; n++){
                if((sum+n)%11==0){
                    rest=n;
                    break;
                }
            }
            if(rest==10) rest=40;//'X'는 40
            if(rest!=number[9]) answer=0;
        }
        cout << answer << endl;
    }
    return 0;
}