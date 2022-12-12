/*

ACM 호텔 매니저 지우는 손님이 도착하는 대로 빈 방을 배정하고 있다. 
고객 설문조사에 따르면 손님들은 호텔 정문으로부터 걸어서 가장 짧은 거리에 있는 방을 선호한다고 한다. 
여러분은 지우를 도와 줄 프로그램을 작성하고자 한다. 
즉 설문조사 결과 대로 호텔 정문으로부터 걷는 거리가 가장 짧도록 방을 배정하는 프로그램을 작성하고자 한다.

문제를 단순화하기 위해서 호텔은 직사각형 모양이라고 가정하자. 
각 층에 W 개의 방이 있는 H 층 건물이라고 가정하자 (1 ≤ H, W ≤ 99). 그리고 엘리베이터는 가장 왼쪽에 있다고 가정하자(그림 1 참고). 이런 형태의 호텔을 H × W 형태 호텔이라고 부른다. 호텔 정문은 일층 엘리베이터 바로 앞에 있는데, 정문에서 엘리베이터까지의 거리는 무시한다. 
또 모든 인접한 두 방 사이의 거리는 같은 거리(거리 1)라고 가정하고 호텔의 정면 쪽에만 방이 있다고 가정한다.

*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    int count;
    cin >> count;

    int row, column, guest; // 행, 열, 손님

    for (int i = 0; i < count; i++) {
        cin >> row >> column >> guest;

        int floor;
        int room;
        string roomNum;

        if (row >= guest) { // 1호 라인으로만 커버 가능
            roomNum = to_string(guest) + "01";
            cout << roomNum<<endl;
            continue;
        }
        else {
            floor = (guest % row) == 0 ? row : guest % row;
            room = (guest % row) == 0 ? guest / row : guest / row + 1;
        }
        
        roomNum = room < 10 ? roomNum = to_string(floor) + "0" + to_string(room) : roomNum = to_string(floor) + to_string(room);

        cout<<stoi(roomNum)<<endl;

    } 
    
}
