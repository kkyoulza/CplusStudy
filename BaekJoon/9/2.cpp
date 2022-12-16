#include<iostream>

using namespace std;

int main(){
    
    int arr[9][9];
    int max = -1;
    int x_index,y_index;
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(arr[i][j] >= max){
                x_index = i+1;
                y_index = j+1;
                max = arr[i][j];
            }
        }
    }
    
    cout<<max<<endl;
    cout<<x_index<<" "<<y_index;
    
    
}
