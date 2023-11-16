#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    map<string,int> arr;
    cin>>s;
    while(cin>>s){
        if(arr[s])
            cout<<s<<arr[s]<<endl;
        else
            cout<<"OK"<<endl;
        arr[s]++;
    }
}
