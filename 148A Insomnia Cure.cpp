#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d,x=0;
    cin>>k>>l>>m>>n>>d;
    int a[d];
    for(int i=0;i<d;i++){
        if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0)
            a[i]=0;
        else
            a[i]=1;
    }
    for(int i=0;i<d;i++){
        if(!a[i])
           x++;
    }
    cout<<x<<endl;
    return 0;
}
