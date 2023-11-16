#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(23-a)*60+(60-b)<<endl;
    }
    return 0;
}