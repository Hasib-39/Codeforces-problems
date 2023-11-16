#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        x=180-n;
        if(360%x)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}