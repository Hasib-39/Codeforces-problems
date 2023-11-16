#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,s1;
        s1="Timru";
        cin>>s;
        sort(s.begin(),s.end());
        //cout<<s<<endl;

        if(!(s1.compare(s)))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
