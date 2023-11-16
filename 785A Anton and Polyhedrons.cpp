#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x=0;
    string a("Tetrahedron"),b("Cube"),c("Octahedron"),d("Dodecahedron"),e("Icosahedron");
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.compare(a)==0)
            x+=4;
        else if(s.compare(b)==0)
            x+=6;
        else if(s.compare(c)==0)
            x+=8;
        else if(s.compare(d)==0)
            x+=12;
        else if(s.compare(e)==0)
            x+=20;
    }
    cout<<x<<endl;
    return 0;
}
