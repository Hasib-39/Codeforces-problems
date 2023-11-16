#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x,y,z,mini;
    x=(k*l)/nl;
    y=(c*d);
    z=p/np;
    mini=x;
    if(y<mini)
        mini=y;
    if(z<mini)
        mini=z;
    mini/=n;
    cout<<mini<<endl;
    return 0;
}
