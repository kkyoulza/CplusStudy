#include<iostream>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<((a+b)%c)<<endl;
    cout<<(((a%c)+(b%c))%c)<<endl;
    cout<<((a*b)%c)<<endl;
    cout<<(((a%c)*(b%c))%c)<<endl;
}

// 오타 조심 %를 &로 쓰지 마라
