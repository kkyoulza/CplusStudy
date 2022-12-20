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
    
    int min,max;
    int answer = 0;
    int small;
    bool isFirst = false;
    cin>>min;
    cin>>max; 
    
    for(int i=min;i<=max;i++){
        if(checkNum(i)){
            if(!isFirst){
                isFirst = true;
                answer += i;
                small = i;
            }else{
                answer += i;
            }
   
        }
            
    }
    if(answer == 0){
        cout<<-1;
    }else{
        cout<<answer<<"\n"<<small;
    }
    
    
}
