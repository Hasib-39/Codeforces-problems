#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n/2)%2!=0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            int x=2;
            for(int i=1;i<=n/2;i++){
                cout<<x<<" ";
                x=x+2;
            }
            x=x-2;
            int y=1;
            for(int i=1;i<n/2;i++){
                cout<<y<<" ";
                y=y+2;
            }
            cout<<x+(n/2)-1<<"\n";
        }
    }
    return 0;
}
