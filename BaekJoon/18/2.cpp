#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int count,num,imsi,max;
    int arr[100001] {0};
    int add[100001] {0};
    cin>>count>>num; 
    
    for(int i=0;i<count;i++){
        cin>>imsi;
        arr[i] = imsi;
        if(i == 0)
            add[i] = imsi;
        else
            add[i] = add[i-1] + imsi;
    }
    
    for(int i=0;i<count-num+1;i++){
        if(i == 0){ // 초기 값을 세팅하는 경우
           imsi = add[num-1];
           max = imsi; // 초기 값 세팅
        }   
        else
            imsi = add[i+num-1] - add[i-1];
        
        if(max < imsi){
            max = imsi;
            imsi = 0;
        }
        
    }
    
    cout<<max;
    
}
