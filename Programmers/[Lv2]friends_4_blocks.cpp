#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    int count = 0;

    vector<vector<int>> checkBoard(m, vector<int>(n, 0)); // m x n 벡터 초기화

    while (true) {

        for (int i = 0; i < board.size() - 1; i++) {

            for (int j = 0; j<board[0].size() - 1; j++) {

                if (board[i][j] == board[i][j + 1] && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 1][j + 1] && board[i][j] != '.') {
                    checkBoard[i][j] = 1;
                    checkBoard[i][j + 1] = 1;
                    checkBoard[i + 1][j] = 1;
                    checkBoard[i + 1][j + 1] = 1;
                    count++;
                }

            }

        }

        if (count == 0)
            break;

        for (int i = 0; i < checkBoard.size(); i++) {

            for (int j = 0; j < checkBoard[0].size(); j++) {

                if (checkBoard[i][j] == 1) {
                    answer++;
                    checkBoard[i][j] = 0;
                    board[i][j] = '.';
                }

            }

        }

        for (int j = 0; j < n; j++) {

            for (int i = m - 2; i >= 0; i--) { // 세로로 거꾸로 탐색 (아래에서 두 번째 줄부터)

                if (board[i][j] != '.') { // 만약 점이 아니라면

                    for (int l = i; l < m - 1; l++) { // 바로 아래에 점이 있는지 확인하는 것을 반복(맨 아래로 내려갈 때 까지 or 점이 안나올 때 까지)

                        if (board[l + 1][j] == '.') { // 아래가 점이면

                            board[l + 1][j] = board[l][j]; // 한 칸을 내리고
                            board[l][j] = '.'; // 위를 점으로 바꾼다.

                        }
                        else { // 아래가 점이 아니면

                            break; // 아예 끝낸다 - 아래부터 위로 참고하기 때문에 아래가 점이 아니면 꽉 차있는 것이다.

                        }

                    }

                }

            }

        }

        count = 0;

    }

    return answer;
}
