#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[200],o=0,e=0,lo,le;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2){
            o++;
            lo=i+1;
        }
        else{
            e++;
            le=i+1;
        }
    }
    if(o==1)
        cout<<lo<<endl;
    else if(e==1)
        cout<<le<<endl;
    return 0;
    }

