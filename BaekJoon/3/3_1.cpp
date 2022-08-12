#include<iostream>

using namespace std;

int Sum(int range){
    
    int hap;
    
    if(range == 1)
        return 1;
    hap = range + Sum(range-1);
    
    return hap;
}

int main(){
    int num;
    cin>>num;
    
    cout<<Sum(num);
    
    
}



// 반복문 없이 재귀를 통해 풀었다.
