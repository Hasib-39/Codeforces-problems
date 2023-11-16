#include<bits/stdc++.h>
using namespace std;

int main(){
    char c,d;
    cin>>c;
    string a="qwertyuiopasdfghjkl;zxcvbnm,./";
    while(cin>>d){
        cout<<a[a.find(d)-(c=='R')+(c=='L')];
    }
    return 0;
}