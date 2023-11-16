#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string f,m,s;
    cin>>f>>m>>s;
    if(f=="rock"&&m=="scissors"&&s=="scissors")
        cout<<"F"<<endl;
    else if(f=="scissors"&&m=="rock"&&s=="scissors")
        cout<<"M"<<endl;
    else if(f=="scissors"&&m=="scissors"&&s=="rock")
        cout<<"S"<<endl;
    else if(f=="paper"&&m=="rock"&&s=="rock")
        cout<<"F"<<endl;
    else if(f=="rock"&&m=="rock"&&s=="paper")
        cout<<"S"<<endl;
    else if(f=="rock"&&m=="paper"&&s=="rock")
        cout<<"M"<<endl;
    else if(f=="paper"&&m=="paper"&&s=="scissors")
        cout<<"S"<<endl;
    else if(f=="scissors"&&m=="paper"&&s=="paper")
        cout<<"F"<<endl;
    else if(f=="paper"&&m=="scissors"&&s=="paper")
        cout<<"M"<<endl;
    else
        cout<<"?"<<endl;
    return 0;

}
