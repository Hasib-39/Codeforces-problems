#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]==arr[n-1])
            cout<<1LL*n*(n-1LL)<<endl;
        else{
            long long min=0,max=0;
            for(int i=0;i<n;i++){
                if(arr[0]==arr[i])
                    min++;
                else
                    break;
            }
            for(int i=n-1;i>=0;i--){
                if(arr[n-1]==arr[i])
                    max++;
                else
                    break;
            }
            cout<<2LL*max*min<<endl;
        }
    }
    return 0;
}