#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool t=true;
    for(int i=1;i<s.length();i++){
        if(s[i]>=97){
            t=false;
            break;
        }
    }
    if(t){
        for(int i=0;i<s.length();i++){
            if(s[i]>=97){
                s[i]=s[i]-32;
            }
            else{
                s[i]=s[i]+32;
            }
        }
        cout<<s;
    }
    else{
        cout<<s;
    }
    return 0;

}
