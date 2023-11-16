#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int max_value=0,min_value=110;
    int maxi=0,mini=0;
    for(int i=1;i<=t;i++){
        int a;
        cin>>a;
        if(a>max_value){
            maxi=i;
            max_value=a;
        }
        if(a<=min_value){
            mini=i;
            min_value=a;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(t-mini)-1;
    }
    else{
        cout<<(maxi-1)+(t-mini);
    }
    return 0;
}
