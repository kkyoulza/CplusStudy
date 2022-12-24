#include <iostream>
using namespace std;


int solution(int n)
{
    int ans = 0;

    while(n > 0){

        if(n % 2 == 0){
            // 짝수
            n /= 2;
            continue;
        }else{
            // 홀수
            n -= 1;
            ans++;
            continue;

        }

    }

    return ans;
}
