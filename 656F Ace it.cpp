#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dgsm(int n){
    int sum=0,rem;
    while(n!=0){
    rem=n%10;
    if(rem==0)
        n/=10;
    else if(rem==1){
        sum=sum+10;
        n/=10;
    }
    else{
        sum+=rem;
        n/=10;
    }
    }
    return sum+1;
}
int main(){
    int n,x;
    char a;
    cin>>a>>n;
    x=dgsm(n);
    cout<<x<<endl;
    return 0;
}
