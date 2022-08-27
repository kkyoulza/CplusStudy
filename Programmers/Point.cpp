/*

수정중!

그래프는 Ax + By + C = 0 의 형태로 주어지며 벡터에 담겨서 주어진다.

두 선이 만나는 교점들의 좌표들을 찍어서 출력하라.

교점 구하는 식

Ax + By + E = 0
Cx + Dy + F = 0

x = (B*F - E*D) / (A*D - B*C)
y = (E*C - A*F) / (A*D - B*C)

A*D - B*C 가 0이면 평행 or 일치

한 점만 교점이 생기는 경우에 한해 카운트


*/


#include <string>
#include <vector>

using namespace std;

void compare(vector<vector<int>> &input, int start,vector<vector<int>> &saveDots){
    
    int A,B,C,D,E,F,x,y;
    vector<int> imsi;
    
    for(int i = start+1;i<input.size();i++){
        
        A = input[start][0];
        B = input[start][1];
        C = input[i][0];
        D = input[i][1];
        E = input[start][2];
        F = input[i][2];
        
        if((A*D - B*C) == 0)
            continue;
        
        x = (B*F - E*D) / (A*D - B*C);
        y = (E*C - A*F) / (A*D - B*C);
        
        imsi.push_back(x);
        imsi.push_back(y);
        
        saveDots.push_back(imsi);
        
        imsi.clear();
 
    }
    
}

vector<string> solution(vector<vector<int>> line) {
    vector<string> answer;
    vector<vector<int>> saveDots;
    
    for(int i = 0;i<line.size()-1;i++){
        
        compare(line,i,saveDots);
        
    }
    
    int X_max = 0;
    int X_min = 0;
    int Y_max = 0;
    int Y_min = 0;
    
    for(int i=0;i<saveDots.size();i++){
        
        if(X_max <= saveDots[i][0])
            X_max = saveDots[i][0];
        
        if(X_min >= saveDots[i][0])
            X_min = saveDots[i][0];
        
        if(Y_max <= saveDots[i][1])
            Y_max = saveDots[i][1];
        
        if(Y_min >= saveDots[i][1])
            Y_min = saveDots[i][1]; 
        
    }
    
    int indX,indY;
    
    int X_size = X_max - X_min + 1;
    int Y_size = Y_max - Y_min + 1;
    string imsi = "";
    
    for(int i=0;i<X_size;i++){
        imsi +=".";
    }
    
    for(int i=0;i<Y_size;i++){
        answer.push_back(imsi);
    }
    
    for(int i=0;i<saveDots.size();i++){
        
        indX = saveDots[i][0] + ((-1)*X_min);
        indY = Y_size - (saveDots[i][1] + ((-1) * Y_min)) - 1;
        
        answer[indY][indX] = '*';

    }
    
    
    return answer;
}
