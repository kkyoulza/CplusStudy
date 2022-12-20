#include<iostream>
#include<vector>

using namespace std;


int main() {

    int start, end;
    cin >> start >> end;

    int* pArr = new int[end+1]();

    pArr[0] = 1;
    pArr[1] = 1;

    for (int i = 2; i <= end; i++) {
        if (pArr[i] == 1) {
            continue;
        }
        else {
            for (int j = 2 * i; j <= end; j += i) {
                if(j > end)
                    break;
                pArr[j] = 1;
            }
        }
    }

    for (int i = start; i <= end; i++) {
        if(pArr[i] == 0)
            cout << i << "\n";
    }


}
