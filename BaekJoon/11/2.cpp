#include<iostream>

using namespace std;

int fibonacci(int input){
    
    if(input == 0){
        return 0;
    }
    if(input == 1){
        return 1;
    }
    
    return (fibonacci(input-1) + fibonacci(input-2));
    
}

int main(){
    
    int num;
    cin>>num;
    
    cout<<fibonacci(num);
    
    
}
