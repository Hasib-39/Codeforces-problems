#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                x++;
            else
                x = max(x-1,0);
        }
            cout<<x<<endl;
    }
    return 0;
}
