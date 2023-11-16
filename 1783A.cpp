#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int t,n,arr[100];
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>arr[i];
        if(arr[1]==arr[n]) cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<arr[1];
            for(int i=n;i>1;i--)
                cout<<" "<<arr[i];
            cout<<endl;
        }
    }
        return 0;
}
