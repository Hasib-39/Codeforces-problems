#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x,y=0;
    cin>>n>>m;
    x=4*60-m;
    for(int i=1;i<=n;i++){
        y+=5*i;
        if(y>x){
            cout<<i-1<<endl;
            break;
        }
        else if(y==x){
            cout<<i<<endl;
            break;
        }
        if(i==n&&y<x){
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}
