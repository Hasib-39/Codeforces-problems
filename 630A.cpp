#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
        return 0;
    }
    else if(n==1){
        cout<<5<<endl;
        return 0;
    }
    else
        cout<<25<<endl;
    return 0;
}
