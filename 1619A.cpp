#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n;
        n=s.size();
        if(s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size()))
         cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}