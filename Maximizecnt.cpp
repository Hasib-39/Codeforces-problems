#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int mxi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mxi=max(mxi,arr[i]);
    }
    int mx=0;
    for(int i=1;i<mxi+1;i++){
        int ans=0;
        for(int j=0;j<n;j++){
            if(abs(arr[j]-i)<=1) ans++;
        }
        mx=max(ans,mx);
    }
    cout<<mx<<endl;
    return 0;
}