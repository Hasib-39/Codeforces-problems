#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v1(n);
    for(auto &it:v1)cin>>it;
    sort(v1.begin(),v1.end());
    int sum=0;
    for(int i=0;i<k;i++){
        if(v1[i]<0)
            sum-=v1[i];
    }
    cout<<sum<<endl;
    return 0;
}