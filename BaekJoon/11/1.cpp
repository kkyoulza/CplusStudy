#include<iostream>

using namespace std;

int factorial(int input){
    
    if(input == 0){
        return 1;
    }
    
    if(input == 2){
        return 2;
    }
    
    return (input * factorial(input-1));
    
}


int main(){
    
    int num;
    cin>>num;
    
    cout<<factorial(num);
    
}

