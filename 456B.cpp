#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin>>s;
    puts(((s[s.size()-2]-'0')*10+s[s.size()-1]-'0')%4?"0":"4");
}
