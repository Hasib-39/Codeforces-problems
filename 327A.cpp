#include<iostream>
using namespace std;

int main(){
    int n,c1=0,c0=0,x,mx=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x==1)c1++;
        if(x==0){
            c0++;
            mx=max(mx,c0);
        }
        else if(c0>0){
            c0--;
        }
    }
    if(mx==0)mx--;
    cout<<c1+mx<<"\n";
    return 0;
}