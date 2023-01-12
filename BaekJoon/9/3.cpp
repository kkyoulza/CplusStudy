#include<iostream>

using namespace std;

int main() {

    int arr[101][101]{ 0, };
    int count, x, y;
    int answer = 0;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> x >> y;
        for (int j = 0; j < 10; j++) {
            for (int l = 0; l < 10; l++) {
                arr[x+j][y+l] = 1;
            }
        }
    }

    for (int j = 0; j < 101; j++) {
        for (int l = 0; l < 101; l++) {
            if (arr[j][l] == 1)
                answer++;
        }
    }

    cout << answer;

}
