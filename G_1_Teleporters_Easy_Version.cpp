#include<bits/stdc++.h>
using namespace std; 
int main() { 
    int t;
    cin>>t;
    while(t--) {
    long long n, c;
    cin>>n>>c;
    long long a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        a[i]+=i+1;
        }
    sort(a, a+n) ;
    long long ans =0;
    for(int i=0;i<n;i++) {
        c-=a[i];
        if(c>=0) {ans++;}
        }
    cout<<ans<<endl;
    }
}   