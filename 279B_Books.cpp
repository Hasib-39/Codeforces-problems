#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int r=0, sum=0, ans=0;
    for(int i=0;i<n;i++){
        while(r<n && sum+ v1[r]<=t){
            sum+= v1[r];
            ++r;
        }
        ans = max(ans, r-i);
        sum -= v1[i];
    }
    cout<< ans << "\n";
    return 0;
}