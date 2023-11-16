#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,arr[105],count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    for(int i=0;i<t;i++){
        count+=arr[t-1]-arr[i];
    }
    cout<<count<<endl;
    return 0;
}
