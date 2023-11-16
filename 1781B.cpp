#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int t,n,cnt;
int arr[200005];
int main(){
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++)cin>>arr[i];
        sort(arr+1,arr+1+n);
        arr[n+1]=0x3f3f3f;
        for(int i=1;i<=n;i++)if(arr[i]<i && arr[i+1]>i)cnt++;
        if(arr[1]!=0)cnt++;
        cout<<cnt<<endl;
        arr[n+1]=0;
    }
    return 0;
}