#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            if(i&1){
                cout<<n-i/2<<" ";
            }
            else
                cout<<i/2<<" ";
        }
        cout<<"\n";
    }
        return 0;
}
