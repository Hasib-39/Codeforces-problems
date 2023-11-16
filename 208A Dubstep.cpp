#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    bool check=true;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(!check)
                cout<<" ";
            continue;
        }else{
            check=false;
            cout<<s[i];
        }
    }
    return 0;
}
