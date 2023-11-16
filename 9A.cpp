#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int mx;
    mx=max(a,b);
    int p1,p2;
    p1=6-(mx-1);
    if(p1==1 || p1==5)
        cout<<p1<<"/6";
    else if(p1==2)
        cout<<"1/3";
    else if(p1==3)
        cout<<"1/2";
    else if(p1==4)
        cout<<"2/3";
    else if(p1==6)
        cout<<"1/1";
    else if(p1==0)
        cout<<"0/1";

    return 0;
}