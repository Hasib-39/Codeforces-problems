#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==-1){
            if(sum>0)
                sum-=1;
            else
                x++;
        }
        else
            sum+=a;
    }
    cout<<x<<endl;
    return 0;
}
