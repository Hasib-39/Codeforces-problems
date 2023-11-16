#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(ll i=1;i<=n;i=i*10+1){
            for(int d=1;d<=9;d++){
                if(i*d<=n)
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}