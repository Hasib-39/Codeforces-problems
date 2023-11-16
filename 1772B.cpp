#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b == c<d && a<c == b<d)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}