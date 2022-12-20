#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int count,num,imsi,sum;
    cin>>count>>num;
    vector<int> arr;
    
    for(int i=0;i<count;i++){
        cin>>imsi;
        arr.push_back(imsi);
    }
    
    sum = 0;
    
    for(int i = arr.size()-1;i>=0;i--){
        if(num == 0)
            break;
        if(arr[i] > num)
            continue;
        sum += num / arr[i];
        num %= arr[i];
        
    }
    
    cout<<sum;
    
}

