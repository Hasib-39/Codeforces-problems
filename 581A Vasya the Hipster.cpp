#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    if(m>=n){
        cout<<n<<" ";
        m-=n;
        cout<<m/2<<endl;
    }
    else if(m<n){
        cout<<m<<" ";
        n-=m;
        cout<<n/2<<endl;
    }
    return 0;

}
