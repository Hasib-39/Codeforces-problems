#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10000000]={0};
    for(int i=2;i<10000000;i++){
        if(a[i]==0){
            for(int j=2;i*j<10000000;j++){
                a[i*j]=1;
            }
        }
    }
    int t;
    cin>>t;
    long long int b;
    long long int sq;
    for(int i=0;i<t;i++){
        cin>>b;
        sq=sqrt(b);
        if(b==1)
            cout<<"NO"<<endl;
        else if(sq*sq==b && (a[sq]==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
