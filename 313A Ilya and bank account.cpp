#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx=n;
    if(n/10 > mx) mx=n/10;
    if(n%10+(n/100)*10>mx)mx=n%10+(n/100)*10;
    cout<<mx;
    return 0;
}
