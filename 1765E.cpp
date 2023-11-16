#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int x=(n+a-1)/a;
        if(a>b) x=1;
        cout<<x<<endl;
    }
}