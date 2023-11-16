#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2) cout<<"YES\n1 -1\n";
        else if(n==3) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=1;i<=n;i++){
                cout<<(i&1?-1:1)*(n-1-(i&1))/2<<" ";
            }
            cout<<"\n";
        } 
    }
}