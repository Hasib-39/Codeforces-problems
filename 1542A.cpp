#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        int a;
        for(int i=0;i<2*n;i++){
            cin>>a;
            if(a%2) cnt++;
        }
        if(cnt==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
