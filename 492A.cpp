#include<iostream>
using namespace std;
int main(){
    int n,sum=0,s1=0,i;
    cin>>n;
    for(i=1;n>=sum;i++){
        s1+=i;
        sum+=s1;
    }
    cout<<i-2<<endl;
    return 0;
}