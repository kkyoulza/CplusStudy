#include<iostream>

using namespace std;

int main(){
    int hour,minute;
    cin>>hour>>minute;
    
    if(minute >= 45){
        cout<<hour<<" "<<minute-45<<endl;
    }else{
        if(hour>0){
            cout<<hour-1<<" "<<60-(45-minute)<<endl;
        }else if(hour == 0){
            cout<<23<<" "<<15+minute<<endl;
        }
    }
     
}

// 부등호를 주의해서 사용할 것!
