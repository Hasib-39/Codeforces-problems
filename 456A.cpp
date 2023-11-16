#include<iostream>
using namespace std;
int main(){
    string s="Poor Alex";
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a!=b)
            s="Happy Alex";
    }
    cout<<s;
    return 0;
}
