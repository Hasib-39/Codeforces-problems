#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=0;i+2<n;i++){
        if(arr[i]=='x'&&arr[i+1]=='x'&&arr[i+2]=='x')
            x++;
    }
    cout<<x<<endl;
    return 0;
}
