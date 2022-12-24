#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int count,num,imsi,start,end;
    int arr[100001] {0};
    int add[100001] {0};
    vector<int> ans;
    cin>>count>>num; 
    
    for(int i=0;i<count;i++){
        cin>>imsi;
        if(i == 0)
            add[i] = imsi;
        else
            add[i] = add[i-1] + imsi;
    }
    
    for(int i=0;i<num;i++){
        cin>>start>>end;
        if(start == 1)
            ans.push_back(add[end-1]);
        else
            ans.push_back(add[end-1] - add[start- 2]);
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
    
}
