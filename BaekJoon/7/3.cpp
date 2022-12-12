#include<iostream>

using namespace std;

int main() {

    int top = 1;
    int bottom = 1;
    int count = 1;
    bool isRight = true;

    int findNum;

    cin >> findNum;

    while (true) {

        if (count == findNum) {
            cout << top << "/" << bottom << endl;
            break;
        }
        
        if(isRight){
            // 오른쪽 방향으로 이동
            if (top == 1) {
                bottom++;
                count++;
                isRight = false; // 방향 전환(맨 위에서!)
            }
            else {
                bottom++;
                top--;
                count++;
            }
            
        }else
            // 왼쪽 방향으로 이동
            if (bottom == 1) {
                top++;
                count++;
                isRight = true; // 방향 전환(맨 왼쪽 라인에서!)
            }
            else {
                bottom--;
                top++;
                count++;
            }
            
        }

    }
/*

나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

*/
