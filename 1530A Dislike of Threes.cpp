#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;;i++){
            if(i%10==3||i%3==0){
                continue;
            }
            if(--n==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
