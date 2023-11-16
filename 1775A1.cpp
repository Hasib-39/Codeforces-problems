#include<bits/stdc++.h>
using namespace std;
void solve(){
    string m;
    cin>>m;
    int n=m.size();
    if(m[0]=='a'&&m[1]=='b')
        cout<<'a'<<" "<<m.substr(1,n-2)<<" "<<m[n-1]<<endl;
    else
        cout<<m[0]<<" "<<m[1]<<" "<<m.substr(2,n-2)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
