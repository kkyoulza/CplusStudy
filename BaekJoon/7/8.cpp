#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void reverse(std::string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}


int main(){
    
    string a, b, answer;
    cin >> a >> b;

    bool frontIsBig = false;
    int shortCount;
    int longCount;

    if (a.length() >= b.length()) {
        frontIsBig = true;
        shortCount = b.length();
        longCount = a.length();
    }
    else {
        frontIsBig = false;
        shortCount = a.length();
        longCount = b.length();
    }

    bool existUpNumber = false; // 올림 수가 존재?
    int imsi = 0;

    for (int i = shortCount - 1; i >= 0; i--) {
        if (frontIsBig) {
            // b에 i 할당
            if (existUpNumber) {
                imsi = ((int)b[i]-48) + ((int)a[longCount - 1]-48) + 1;
                existUpNumber = false;
            }
            else {
                imsi = ((int)b[i] - 48) + ((int)a[longCount - 1] - 48);
            }

            if (imsi >= 10) {
                existUpNumber = true;
                answer += to_string(imsi - 10);
            }
            else {
                answer += to_string(imsi);
            }

        }
        else {
            // a에 i 할당
            if (existUpNumber) {
                imsi = ((int)a[i]-48) + ((int)b[longCount - 1]-48) + 1;
                existUpNumber = false;
            }
            else {
                imsi = ((int)a[i] - 48) + ((int)b[longCount - 1] - 48);
            }

            if (imsi >= 10) {
                existUpNumber = true;
                answer += to_string(imsi - 10);
            }
            else {
                answer += to_string(imsi);
            }
        }
        longCount--;
    }

    
    if (longCount == 0) {
        if (existUpNumber) {
            answer += "1";
        }

    }
    else {
        for (int i = longCount-1; i >= 0; i--) {
            if (frontIsBig) {
                // a가 long
                if (existUpNumber) {
                    imsi = ((int)a[i] - 48) + 1;
                    existUpNumber = false;
                }
                else {
                    imsi = ((int)a[i] - 48);
                }

                if (imsi >= 10) {
                    existUpNumber = true;
                    answer += to_string(imsi - 10);
                }
                else {
                    answer += to_string(imsi);
                }

            }
            else {
                // b가 long
                if (existUpNumber) {
                    imsi = ((int)b[i] - 48) + 1;
                    existUpNumber = false;
                }
                else {
                    imsi = ((int)b[i] - 48);
                }

                if (imsi >= 10) {
                    existUpNumber = true;
                    answer += to_string(imsi - 10);
                }
                else {
                    answer += to_string(imsi);
                }
            }
        }
        if (existUpNumber) {
            answer += "1";
        }
    }

    reverse(answer);

    cout << answer;   
    
}


/*

두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

첫째 줄에 A와 B가 주어진다. (0 < A,B < 10^10000)

*/
