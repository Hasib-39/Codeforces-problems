#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n/2;
    cout<<x<<endl;
    while(--x){
        cout<<2<<" ";
    }
    cout<<(n%2==1?3:2);
    return 0;
}