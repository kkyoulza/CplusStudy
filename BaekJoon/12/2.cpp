#include<iostream>
#include<string>

using namespace std;

int calSum(int input){
    
    int sum = 0;
    string imsi = to_string(input); 
    
    for(int i=0;i<imsi.length();i++){
        sum += (int)imsi[i] - 48;
    }
    
    sum += input;
    
    return sum;
    
}

int main(){
    
    int count,sum;
    bool isFind = false;
    cin>>count;
    
    for(int i=1;i<count;i++){
        if(calSum(i) == count){
            cout<<i;
            isFind = true;
            break;
        }
    }
    
    if(!isFind){
        cout<<0;
    }
    
}
