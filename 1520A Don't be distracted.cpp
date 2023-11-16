#include<iostream>
using namespace std;
void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char c='A';c<='Z';c++){
        int begin=n;
        int end=-1;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                begin=min(begin,i);
                end=max(end,i);
            }
        }
        for(int i=begin;i<=end;i++){
            if(s[i]!=c){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}
