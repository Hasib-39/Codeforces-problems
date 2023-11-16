#include <iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    string s;
    cin>>n>>s;
    int q=0,a=0;
    for(int i=0;i<n;i++){
        if(s[i]=='Q')
            q++;
        else
            q--;
        if(q<=0){
            a=0;
            q=0;
        }
    }
    if(q==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
    return 0;
}
