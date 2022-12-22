#include<iostream>
#include<vector>

using namespace std;

int main() {

    int* pArr = new int[10001](); // 0~10000
    vector<vector<int>> answer;
    vector<int> vecImsi;

    pArr[0] = 1;
    pArr[1] = 1;

    for (int i = 2; i <= 10000; i++) {
        if (pArr[i] == 1) {
            continue;
        }
        else {
            for (int j = 2 * i; j <= 10000; j += i) {
                if (j > 10000)
                    break;
                pArr[j] = 1;
            }
        }
    }

    int count, num, imsi;
    int distance = 10000;
    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> num;

        for (int j = 2; j < num; j++) {
            if (pArr[j] == 0) {
                if (pArr[num - j] == 0) {
                    // 두 번째 숫자도 소수일 때
                    if (distance > abs(j - (num - j))) { // 차이가 가장 적을 때
                        distance = abs(j - (num - j));
                        imsi = j < (num - j) ? j : (num - j); // 작은 부분을 저장
                    }
                }
                else {
                    continue;
                }
            }
            else {
                // 첫 번째 숫자가 소수가 아닐 때
                continue;
            }
        }
        vecImsi.push_back(imsi);
        vecImsi.push_back(num - imsi);
        answer.push_back(vecImsi);
        vecImsi.clear();
        distance = 10000;
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i][0] << " " << answer[i][1] << endl;
    }


}
