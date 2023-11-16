#include<iostream>
#include<bits/stdc++.h>
typedef long long int ln;
using namespace std;
ln dp[100005]={0};
ln dp2[100005];
/*ln boredom(const int i){
    if(i==0)return 0;
    if(i==1)return dp[1];
    return max(boredom(i-1),boredom(i-2)+i*dp[i]);
}*/
int main(){
    long long int a,i,b,m=0;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>b;
        dp[b]++;
    }
    dp2[0]=0;
    dp2[1]=dp[1];
    for(i=2;i<=100000;i++){
        dp2[i]=max(dp2[i-1],dp2[i-2]+i*dp[i]);
    }
    cout<<dp2[100000];
    return 0;
}
