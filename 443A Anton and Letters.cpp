#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    set<char> k;
    for(int i=0;i<a.length();i++){
        if(a[i]!='{'&&a[i]!=' '&&a[i]!=','&&a[i]!='}')
            k.insert(a[i]);
    }
    cout<<k.size();
    return 0;
}
