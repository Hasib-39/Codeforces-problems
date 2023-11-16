#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a,b;
        a=(s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        b=(s[3]-'0')+(s[4]-'0')+(s[5]-'0');
        if(a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}