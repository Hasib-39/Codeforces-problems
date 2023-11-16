#include<bits/stdc++.h>
using namespace std;
long long arr[25];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=25;i++) 
        arr[i]=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cl=0;
            while(n%i==0){
                arr[++cl]*=i;
                n/=i;
            }
        }
    }
    if(n!=1) arr[1]*=n;
    long long ans=0;
    for(int i=1;i<=25;i++){
        if(arr[i]!=1)
            ans+=arr[i];
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}