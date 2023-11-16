#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<int,int>arr[1050];
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].first,arr[i].second=i;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        sum+=i*arr[n-i-1].first+1;
    }
    cout<<sum<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i].second+1<<" ";
    }
    return 0;

}
