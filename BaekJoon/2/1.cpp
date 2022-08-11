#include<iostream>

using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    if(a<b){
        cout<<'<'<<endl;
    }else if(a>b){
        cout<<'>'<<endl;
    }else
        cout<<"=="<<endl;   
}

// 간단한 조건문의 사용 여부를 나타낸다.
// == 는 string이므로 ""를 사용하였다.
