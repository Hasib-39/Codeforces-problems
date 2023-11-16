#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,l,r,val=-1;
        cin>>l>>r>>x>>a>>b;
        if(a>b)
            swap(a,b);
        if(a==b)
            val=0;
        else if(abs(a-b)>=x)
            val=1;
        else if(b+x<=r || a-x>=l)
            val=2;
        else{
            if(b-x>=l && a+x<=r)
                val=3;
        }
        cout<<val<<endl;
    }
    return 0;
}