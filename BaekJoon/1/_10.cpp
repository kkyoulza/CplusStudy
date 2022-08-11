#include<iostream>

using namespace std;

int main() {
    int k,q, l, b, kn, p;
    cin >> k>> q>> l>> b>> kn>> p; // 콤마로 적지 마라! 헷갈리지 말 것!
    cout << 1 - k<<" "<< 1 - q<<" "<< 2 - l<<" " << 2 - b<<" " << 2 - kn<< " " << 8 - p << endl;
}
// 여러 개의 원소들을 입력 받을 때 자꾸 콤마를 쓴다.. 헷갈리지 마라.
// 그리고 여러 개의 원소들을 출력할 때 공백을 가미하기 위해서는 " "를 사용하면 된다.
