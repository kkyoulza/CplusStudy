#include<iostream>

using namespace std;

int main(){
    
    int count;
    cin>>count;
    
    int arr[count];
    
    for(int i=0;i<count;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(arr[i] > arr[j]){
                int imsi = arr[j];
                arr[j] = arr[i];
                arr[i] = imsi;
            }
        }
    }
    
    for(int i=0;i<count;i++){
        cout<<arr[i]<<endl;
    }
    
    
    
    
}
