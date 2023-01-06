#include<iostream>

using namespace std;

int main(){
    
    int ansX,ansY;
    int arr[3][2];
    
    cin>>arr[0][0]>>arr[0][1];
    cin>>arr[1][0]>>arr[1][1];
    cin>>arr[2][0]>>arr[2][1];
    
    if(arr[0][0] == arr[1][0])
        ansX = arr[2][0];        
    if(arr[0][0] == arr[2][0])
        ansX = arr[1][0];
    if(arr[1][0] == arr[2][0])
        ansX = arr[0][0];
    
    if(arr[0][1] == arr[1][1])
        ansY = arr[2][1];        
    if(arr[0][1] == arr[2][1])
        ansY = arr[1][1];
    if(arr[1][1] == arr[2][1])
        ansY = arr[0][1];
    
    cout<<ansX<<" "<<ansY;
    
}
