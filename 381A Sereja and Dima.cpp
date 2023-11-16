#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s=0,d=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int l=0,r=t-1,tk=t,turn=0;
    while(tk!=0){
        if(turn%2==0){
            if(a[l]>a[r]){
                s+=a[l];
                l++;
            }else{
                s+=a[r];
                r--;
            }
        }
        else{
            if(a[l]>a[r]){
                d+=a[l];
                l++;
            }else{
                d+=a[r];
                r--;
            }
        }
        tk--;
        turn++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}
