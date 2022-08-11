#include<iostream>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x>0){
        if(y>0){
            cout<<1<<endl;
        }else{
            cout<<4<<endl;
        }
    }else{
        if(y>0){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
    }
  
}

// 이것은 if문의 개수를 최대한 줄여보려고 생각했지만 그냥 정석대로 하였다.
// 좋은 아이디어가 떠오르면 다시 오겠다.
