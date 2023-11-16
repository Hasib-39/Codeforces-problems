#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,g,l,a,count=0;
    cin>>n;
    cin>>g;
    l=g;
    while(--n){
        cin>>a;
        if(a>g){
            count++;
            g=a;
        }
        else if(a<l){
            count++;
            l=a;
        }
    }
    cout<<count<<endl;
    return 0;
}
