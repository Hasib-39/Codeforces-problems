#include<iostream>
using namespace std;
int main(){
    int a,b,c,ar[6];
    cin>>a>>b>>c;
    ar[0]=a+b*c;
    ar[1]=a*(b+c);
    ar[2]=a*b*c;
    ar[3]=(a+b)*c;
    ar[4]=a+b+c;
    int ans=max(ar[3],max(ar[2],max(ar[1],max(ar[4],ar[0]))));
    cout<<ans;
    return 0;
}
