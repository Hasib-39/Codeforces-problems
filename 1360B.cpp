#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int out=a[n-1]-a[0];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                out=min(out,a[j]-a[i]);
            }
        }
            cout<<out<<endl;
    }
    return 0;
}