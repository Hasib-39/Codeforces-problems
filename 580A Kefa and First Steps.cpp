#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1<<"\n";
        return 0;
    }
    int count=1,maxcount=INT_MIN;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1])
            count++;
        else
            count=1;
    if(count>maxcount)
        maxcount=count;
    }
    cout<<maxcount;
    return 0;
}

