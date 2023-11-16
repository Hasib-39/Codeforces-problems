#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int d=2*max(a[0],l-a[n-1]);
    for(int i=1;i<n;i++){
        d=max(d,(a[i]-a[i-1]));
    }
    cout<<fixed<<setprecision(9)<<(double)d/2<<endl;
    return 0;
}
