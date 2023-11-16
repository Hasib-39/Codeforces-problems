#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll i,n,s=0;
int main(){
    string a,b;
    cin>>n>>a>>b;
    i=0;
    while(i<n){
        if(a[i]!=b[i]){
            if(i+1<n && a[i+1]!=b[i+1]&& a[i]!=a[i+1]){
                s++;
                i+=2;
            }
            else{
                s++;
                i++;
            }
        }
        else
        i++;
    }
    cout<<s<<endl;
    return 0;
}