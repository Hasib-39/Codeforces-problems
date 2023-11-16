#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b;
        x=(min(max(2*b,a),max(2*a,b)));
        cout<<x*x<<endl;
    }
}
