#include<iostream>

using namespace std;

int main(){
    
    int x,y,w,h,horMin,verMin;
    cin>>x>>y>>w>>h;
    
    if(y>(h-y))
        verMin = h-y;
    else
        verMin = y;
    
    if(x>(w-x))
        horMin = w-x;
    else
        horMin = x;
    
    if(verMin>horMin)
        cout<<horMin;
    else
        cout<<verMin;
    
    
}
