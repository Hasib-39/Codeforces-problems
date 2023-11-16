#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,ar[110],count=0,a,b;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>ar[j];
        }
        a=ar[0];
        for(int j=1;j<n;j++){
            if(ar[j]==a){
                count++;
            }
            else
                b=j;
        }
        if(count==0)
            cout<<1<<endl;
        else
            cout<<b+1<<endl;
    }
    return 0;
}
