#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,j;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        string c=s.substr(0,2);
        for(int j=3;j<s.size();j+=2){
            c+=s[j];
        }
        cout<<c<<endl;
    }
    return 0;
}
