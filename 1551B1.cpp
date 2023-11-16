#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int ch[26]={0};
        for(auto c:s)ch[c-'a']++;
        int c1=0,c2=0;
        for(int i=0;i<26;i++){
            if(ch[i]==1)c1++;
            else if(ch[i]>0)c2++;
        }
        cout<<c2+c1/2<<endl;

    }
    return 0;
}