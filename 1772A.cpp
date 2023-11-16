#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a,b;
        a=s[0]-'0';
        b=s[2]-'0';
        cout<<a+b<<endl;
    }
    return 0;
}