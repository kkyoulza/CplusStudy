#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout.precision(10); // 나오는 정수 + 소수 자릿수가 10개가 되게 해라!
    cout<<a/(double)b;
}

// 백준에서는 소수점 9번째 자리까지 출력하라는 말이 아니라고 하였지만.. 9번째까지 나오게 출력을 하니(정수부분 1자리) 맞았다..
