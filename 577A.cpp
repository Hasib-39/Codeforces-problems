#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=1;i<=a;i++){
        if(b%i==0 && b/i<=a)
            cnt++;
    }
    cout<<cnt<<endl;
}