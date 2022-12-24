#include<iostream>

using namespace std;

int main(){
    
    int count,imsi,num;
    cin>>count>>num;
    
    int* arr = new int[count];
    
    for(int i=0;i<count;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<count-1;i++){
        for(int j=i+1;j<count;j++){
            if(arr[i] < arr[j]){
                imsi = arr[j];
                arr[j] = arr[i];
                arr[i] = imsi;
            }
        }
    }
    
    cout<<arr[num-1];
    
}
