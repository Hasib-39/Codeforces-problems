#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> cnt(x+1,0);
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        cnt[v]++;
    }
    for(int i=1;i<x;i++){
        if(cnt[i]%(i+1)==0){
            cnt[i+1]+=cnt[i]/(i+1);
            cnt[i]=0;
        }
    }
    for(int i=1;i<x;i++){
        if(cnt[i]!=0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
