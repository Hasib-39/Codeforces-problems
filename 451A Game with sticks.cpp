#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int k=min(n,m);
    if(k%2)
        cout<<"Akshat";
    else
        cout<<"Malvika";
    return 0;
}
