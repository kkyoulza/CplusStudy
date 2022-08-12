/*

빠른 cin, cout을 하기 위해서는 
ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
위 부분을 main함수 안에 적어 주어야 한다.

그렇게 되면 C에서 사용할 수 있는 printf 등의 함수들을 사용할 수 없게 된다. (C++것만 사용 가능)

*/



#include<iostream>

using namespace std;


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int count;
    
    cin>>count;
    int a[count];
    int b[count];
    
    for(int i=0;i<count;i++){
        cin>>a[i]>>b[i];
    }
    
    for(int i=0;i<count;i++){
        cout<<a[i]+b[i]<<"\n";
    }
    
}
