#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(a<b)+(a<c)+(a<d)<<endl;
    }
    return 0;
}
