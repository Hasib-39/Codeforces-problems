#include<iostream>
using namespace std;
int main(){
    string s;
    int x=0,xx[100001],n;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])x++;
        xx[i]=x;
    }
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<xx[b-1]-xx[a-1]<<endl;
    }
    return 0;

}