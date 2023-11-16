#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]>'4')
            a[i]='9'-a[i]+'0';
    }
    if(a[0]=='0'){
        a[0]='9';
    }
    cout<<a;
    return 0;
}