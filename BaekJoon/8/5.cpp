#include<iostream>

using namespace std;

int main(){
    
    int input;
    int count = 0;
    
    while(true){
        
        cin>>input;
        
        if(input == 0)
            break;
        
        int* pArr = new int[input*2+1]();
        
        pArr[0] = 1;
        pArr[1] = 1;
        
        for(int i = 2;i<=input*2;i++){
            if(pArr[i] == 1){
                continue;
            }else{
                for(int j=2*i;j<=input*2;j+=i){
                    if(j>input*2)
                        break;
                    pArr[j] = 1;
                }
            }
        }
        
        for (int i = input+1; i <= input*2; i++) {
            if(pArr[i] == 0)
                count++;
        }
        
        cout<<count<<"\n";
        
        count = 0;
        
        delete[] pArr;
        
        
    }
    
}
