#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    vector <int> ar(n),br(n);
    int maxi=0,sk=sum;
    for(int i=0;i<n;++i){
        cin>>ar[i]>>br[i];
        sum-=ar[i];
        maxi+=br[i];
    }
    if(sum<0 || maxi<sk){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    for(int i=0;i<n;++i){
        int neck = min(br[i]-ar[i],sum);
        cout<<ar[i]+neck<<' ';
        sum-=neck;
    }
    return 0;
}
