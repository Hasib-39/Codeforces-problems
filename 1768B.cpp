#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,i,p,x;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=p=1;i<=n;i++){
            cin>>x;
            if(x==p)
                p++;
        }
        cout<<(n-p+k)/k<<endl;
    }
}
