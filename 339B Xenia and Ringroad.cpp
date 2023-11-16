#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,b,cnt=0,a=1;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>b;
        if(a<=b){
            cnt+=(b-a);
            a=b;
        }
        else{
            cnt+=(n-a+b);
            a=b;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
