#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        long long val,m;
        val=n/x;
        m=n%x;
        if(m>=y){
            cout<<val*x+y;
        }
        else
            cout<<(val-1)*x+y;
        cout<<"\n";
    }
    return 0;
}
