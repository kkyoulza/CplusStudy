#include<iostream>

using namespace std;

int main(){
    
    int N,M;
    cin>>N>>M;
    
    int arr[N][M];
    int imsi = 0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>imsi;
            arr[i][j] += imsi;
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<arr[i][j];
            cout<<' ';
        }
        cout<<"\n";
    }
    
    
}
