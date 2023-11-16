#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3],n;
        cin>>arr[0]>>arr[1]>>arr[2]>>n;
        sort(arr,arr+3);
        if(n<(2*arr[2]-arr[1]-arr[0])){
            cout<<"NO"<<endl;
            continue;
        }
        if((n-(2*arr[2]-arr[1]-arr[0]))%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
