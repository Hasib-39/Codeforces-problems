#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n),brr(n);
        for(auto &it: arr)cin>>it;
        for(auto &it: brr)cin>>it;
        int mina = *min_element(arr.begin(),arr.end());
        int minb = *min_element(brr.begin(),brr.end());
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=max(arr[i]-mina,brr[i]-minb);
        }
        cout<<sum<<endl;
    }
    return 0;
}