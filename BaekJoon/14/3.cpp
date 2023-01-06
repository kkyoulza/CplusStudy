#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int x,y,z;
    
    x = 0;
    y = 0;
    z = 0;
    
    while(true){
        cin>>x>>y>>z;
        
        if(x == 0 && y == 0 && z == 0)
            break;
        
        if((pow(x,2) + pow(y,2)) == pow(z,2))
            cout<<"right\n";
        else if((pow(y,2) + pow(z,2)) == pow(x,2))
            cout<<"right\n";
        else if((pow(z,2) + pow(x,2)) == pow(y,2))
            cout<<"right\n";
        else
            cout<<"wrong\n";
        
        
    }
    
}
