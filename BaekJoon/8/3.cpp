#include<iostream>
#include<vector>

using namespace std;

int main() {
    int count;
    vector<int> dArr;
    int devideNum = 2;

    cin >> count;

    while (true) {
        if (count == 1) {
            break;
        }

        if (count % devideNum == 0) {
            dArr.push_back(devideNum);
            count /= devideNum;
        }
        else {
            devideNum++;
        }

    }

    for (int i = 0; i < dArr.size(); i++) {
        cout << dArr[i] << endl;
    }

}
