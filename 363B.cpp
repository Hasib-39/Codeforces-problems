#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a[150010],n,k,x,cnt=15000001,p;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=a[i-1]+x;
        if(i>=k && a[i]-a[i-k]<cnt){
            cnt=a[i]-a[i-k],p=i-k+1;
        }
    }
    cout<<p<<endl;
    return 0;
}