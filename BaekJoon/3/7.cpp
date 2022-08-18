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

        cout<<"Case #"<<i+1<<": "<<A[i]<<" + "<<B[i]<<" = "<<A[i]+B[i]<<endl;
    }
    
}
