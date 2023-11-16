#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s1,s2;
        cin>>n>>s1>>s2;
        replace(begin(s1),end(s1),'G','B');
        replace(begin(s2),end(s2),'G','B');
        cout<<(s1==s2?"YES":"NO")<<endl;
    }
}