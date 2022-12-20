#include<iostream>

using namespace std;

bool checkNum(int input){
    
    int count = 0;
    
    for(int i=1;i<=input;i++){
        if(input % i == 0){
            count++;
        }
    }
    
    if(count == 2)
        return true;
    else
        return false;
    
}

int main(){
    
    int cnt;
    int answer = 0;
    cin>>cnt;
    
    int arr[cnt];
    
    for(int i=0;i<cnt;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<cnt;i++){
        if(checkNum(arr[i]))
            answer++;
    }
    
    cout<<answer;
    
}
