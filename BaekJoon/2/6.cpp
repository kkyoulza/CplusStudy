/*

시간을 Input하고 다음 줄에 요리에 걸리는 시간을 Input 해 주면 

*/

#include<iostream>

using namespace std;

int main(){
    int hour,minute,usingTime,minSum;
    cin>>hour>>minute;
    cin>>usingTime;
    
    minSum = minute + usingTime;
    
    if(minSum>=60) // 시간을 합쳤을 때 60분이 넘으면 시간을 더해 주어야 한다.
    {
        hour += (minSum) / 60; // 몫만큼 시간을 더해 준 다음
        if(hour >= 24) // 날이 넘어가게 되면 나머지 값 만큼으로 갱신 해 준다.
            hour = hour % 24;
        
        cout<<hour<<" "<<minSum % 60<<endl; // 분은 나머지를 넣어준다.
        
    }else{
        cout<<hour<<" "<<minSum<<endl;
    }
    
}
