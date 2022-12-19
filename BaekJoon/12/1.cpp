#include<iostream>

using namespace std;

int main() {

    int count, num, sum, diff;
    cin >> count >> num;
    int diffMin = num;

    int* arr = new int[count];

    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < count - 2; i++) {
        for (int j = i + 1; j<count - 1; j++) {
            for (int l = j + 1; l < count; l++) {
                sum = arr[i] + arr[j] + arr[l];
                if (sum > num) // 합이 큰 경우
                    continue;
                diff = num - sum; // 차이
                if (diff == 0) {
                    cout << num;
                    return 0;
                }
                if (diffMin > diff && diff > 0)
                    diffMin = diff;
            }
        }
    }

    cout << num - diffMin;

}
