#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0,c=0,d=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t==1)
            a++;
        else if(t==2)
            b++;
        else if(t==3)
            c++;
        else
            d++;
    }
    count+=d;
    if(c<a){
        count+=c;
        a-=c;
        c=0;
    }
    else if(c>=a){
        count+=a;
        c-=a;
        a=0;
    }
    if(c>0){
        count+=c;
        c=0;
    }
    if(b>0){
        count+=b/2;
        b=b%2;
    }
    int rem=a+b*2;
    if(rem<=4 && rem>0){
        count+=1;
    }
    else if(rem%4!=0){
        count+=(rem/4)+1;
    }
    else
        count+=rem/4;
    cout<<count<<endl;
    return 0;
}
