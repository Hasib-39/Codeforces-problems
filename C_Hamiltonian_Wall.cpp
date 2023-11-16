 #include<bits/stdc++.h>
 using namespace std;
int n;
string s[2];
int rec(int i,int j){
    if(j==n)return 1;
    if(s[i][j]!='B')return 0;
    if(s[1-i][j]=='B')return rec(1-i,j+1);
    return rec(i,j+1);
}
signed main(){
 for(cin>>n;cin>>n>>s[0]>>s[1];)
  cout<<(rec(0,0)|rec(1,0)?"YES":"NO")<<endl;
}