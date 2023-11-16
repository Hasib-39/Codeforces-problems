#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,m;
        cin>>k>>m;
        for(int i=1;i<=k;i++){
            cout<<min(1+i*(i-1)/2,m-k+i)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
