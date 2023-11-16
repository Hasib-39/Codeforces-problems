#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b)cout<<"0\n";
        else if(a>b){
            if((a-b)%2)cout<<"2\n";
            else cout<<"1\n";
        }
        else{
            if((a-b)%2)cout<<"1\n";
            else cout<<"2\n";
        }
    }
}