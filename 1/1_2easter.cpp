#include <iostream>
using namespace std;

int main(){
    int t, Y, C, N, T, step5, step6, I, J, step9, step10, step11, step12, K, step14, L, P, Q;
    int month, day;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> Y;
        C = Y/100; 
        N = Y-(Y/19)*19;  
        T = (C-17)/25;  
        step5 = C-((C/4)+(C-T)/3); 
        step6= N*19+15;  
        I = step5+step6;  
        J = I-(I/30)*30;  
        step9 = J/28;   
        step10 = 1-step9;  
        step11 = 29/(J+1); 
        step12 = (21-N)/11; 
        K = J-(step9*step10*step11*step12); 
        step14 = Y+(Y/4)+J+2; 
        L = step14-C+(C/4); 
        P = L-(L/7)*7; 
        Q = K-P;  

        month = (Q+40)/44+3;
        day = (Q+28)-(month/4*31); 
        cout << month << " " << day << endl;
    }
    return 0;
}