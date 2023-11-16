#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     int count=0,n,m,b;
     cin>>n>>m;
     for(int a=0;a<=sqrt(n);a++){
        b=n-a*a;
        if((a+(b*b))==m)
            count++;
     }
     cout<<count<<endl;
     return 0;
}
