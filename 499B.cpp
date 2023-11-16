#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    string s1,t1;
    for(int i=1;i<=m;i++){
        cin>>s1>>t1;
        mp[s1]=s1.size()<=t1.size()?s1:t1;
    }
    while(n--){
        cin>>s1;
        cout<<mp[s1]<<" ";
    }
        return 0;
}