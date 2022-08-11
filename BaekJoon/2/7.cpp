/*

셋 다 같은 경우 -> 10000 + (같은 수)*1000
두 개만 같은 경우 -> 1000 + (같은 수)*100
다 다른 경우 -> (가장 큰 수)*100


*/


#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    
    cin>>a>>b>>c;
    
    if(a==b && b==c){ // 셋 다 같은 경우
        cout<<10000+a*1000<<endl;
    }else if(a!=b && a!=c && b!=c){ // 다 다른 경우
        if(a>b){ // a > b
            if(b>c) // a > b > c
                cout<<a*100<<endl;
            else{ // c > b
                if(a>c) // a > c > b
                    cout<<a*100<<endl;
                else // c > a > b
                    cout<<c*100<<endl;
            }
        }else{ // b > a
            if(a>c) // b > a > c
                cout<<b*100<<endl;
            else{ // c > a
                if(b>c) // b > c > a
                    cout<<b*100<<endl;
                else // c > b > a
                    cout<<c*100<<endl;
            }
        }
    }else{ // 두 개만 같은 경우
        if(a == b){
            cout<<1000+a*100<<endl;
        }else if(b == c){
            cout<<1000+b*100<<endl;
        }else{
            cout<<1000+c*100<<endl;
        }
    }

}

// 다 다른 경우가 조금 더 조건을 짜기가 쉽기에 위로 순서를 바꾸었다. 이렇게 무조건 문제 순서에 맞추어야 하는 것은 아니다.
