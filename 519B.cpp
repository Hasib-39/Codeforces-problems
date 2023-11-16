#include<bits/stdc++.h>
using namespace std;
int scan(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    int sa,sb,sc;
    sa=scan(a,n);
    sb=scan(b,n-1);
    sc=scan(c,n-2);
    cout<<sa-sb<<endl<<sb-sc;
    return 0;
}