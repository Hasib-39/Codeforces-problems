#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int i=2,count=1,value=k;
    while(true){
        if(value%10==0){
            cout<<count;
            break;
        }
        if(value%10==r){
            cout<<count;
            break;
        }
        value=k*i;
        count++;
        i++;
    }
    return 0;
}
