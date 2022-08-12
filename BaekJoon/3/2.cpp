#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    
    int add1[num];
    int add2[num];
    
    for(int i=0;i<num;i++){
        cin>>add1[i]>>add2[i];
    }
    
    for(int i=0;i<num;i++){
        cout<<add1[i]+add2[i]<<endl;
    }
    
}

// 배열을 이용하였음
