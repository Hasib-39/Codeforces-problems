#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,c;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>c;
        cout<<upper_bound(s,s+n,c)-s<<endl;
    }
    return 0;
}
