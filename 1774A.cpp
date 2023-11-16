#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool tn=s[0]=='1';
        for(int i=1;i<n;i++){
            if(s[i]=='0')
                putchar('+');
            else
                putchar(tn?'-':'+'),tn^=1;
        }
        puts("");
    }
}

