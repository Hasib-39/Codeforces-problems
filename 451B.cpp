#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r,count=0;
    cin>>n;
    int arr[100001],brr[100001],z=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i]){
            count++,r=i;
            if(count==1)l=i;
        }
    }
    reverse(brr+l,brr+r+1);
    for(int i=l;i<r;i++){
        if(arr[i]!=brr[i])z=0;
    }
    if(z==0)cout<<"no"<<endl;
    else cout<<"yes\n"<<l+1<<" "<<r+1<<endl;
    return 0;
    
    return 0;
}