#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            if(x&1)
                odd++;
        }
        if(odd && !(odd==n && n%2==0))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}