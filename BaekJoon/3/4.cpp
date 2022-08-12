#include<iostream>

using namespace std;

int main(){
    
    int totalMoney,count,sum;
    
    cin>>totalMoney;
    cin>>count;
    
    sum = 0;
    
    int money[count];
    int cnt[count];
    
    for(int i=0;i<count;i++){
        cin>>money[i]>>cnt[i];
        sum += (money[i] * cnt[i]);
    }
    
    if(totalMoney == sum)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

// 간단히 반복을 사용하는 문제이다.
