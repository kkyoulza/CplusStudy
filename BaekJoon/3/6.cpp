#include<iostream>

using namespace std;

int main(){
    
    int count;
    cin>>count;
    
    int A[count];
    int B[count];
    
    for(int i=0;i<count;i++){
        cin>>A[i]>>B[i]; 
    }
    
    for(int i=0;i<count;i++){
      
        cout<<"Case #"<<i+1<<": "<<(A[i]+B[i])<<endl; // 아... 한줄 띄우기 빼먹지 말고 할 것!! ㅠㅠ 문제 제대로 봐라..
    }
    
}
