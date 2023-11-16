#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    int x=0;
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    string d=a+b;
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());

    if(d==c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
