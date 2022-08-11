#include<iostream>

using namespace std;

int main(){
    
    int score;
    cin>>score;
    switch(score/10){
        case 10:
            cout<<'A'<<endl;
            break;
        case 9:
            cout<<'A'<<endl;
            break;
        case 8:
            cout<<'B'<<endl;
            break;
        case 7:
            cout<<'C'<<endl;
            break;
        case 6:
            cout<<'D'<<endl;
            break;
        default:
            cout<<'F'<<endl;
            break;
    } 
    
}

// 범위가 10 단위였기에 switch-case문으로 할 수 있었다.
// 다른 방법으로는 if-else if-else 로 나열하여 할 수도 있다.
// switch-case 에서 default가 마지막에 오는 것을 순간 까먹었다.. 계속 열심히 해서 까먹지 않게 해야겠다..
