#include<iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    cout<<a*(b%10)<<endl;
    cout<<a*((b%100)/10)<<endl;
    cout<<a*(b/100)<<endl;
    cout<<a*b<<endl;
    
    
}

// 자릿수를 구하는 문제이다.
// 이것은 a,b의 자릿수가 고정되어서 쉽게 구할 수 있었지만 고정되지 않았으면 자릿수를 구하는 과정을 거쳐야 했다.(길이를 구하고 10의 제곱에 자릿수-1을 해서 넣은 것을 활용)
