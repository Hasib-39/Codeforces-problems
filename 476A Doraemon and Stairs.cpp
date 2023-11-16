#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m;
    if(n==m){
        cout<<n;
        return 0;
    }
    if(n%2){
        x=(n+1)/2;
    }
    else
        x=n/2;
    if(n==2&&m==2){
        cout<<2<<endl;
        return 0;
    }
    if(x%m==0){
        cout<<x;
        return 0;
    }
    else{
        for(int i=x+1;i<n;i++){
            if(i%m==0){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
