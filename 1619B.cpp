#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s1;
        for(int i=1;i*i<=n;i++){
                s1.insert(i*i);
        }
        for(int i=1;i*i*i<=n;i++){
            s1.insert(i*i*i);
        }
        cout<<s1.size()<<endl;
    }
    return 0;
}