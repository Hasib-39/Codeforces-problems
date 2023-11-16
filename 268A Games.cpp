#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,h[31],a[31],c=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>h[i]>>a[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(i!=j&&h[i]==a[j])
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
