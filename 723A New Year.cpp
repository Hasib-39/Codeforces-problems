#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2],c=0;
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    c=(arr[2]-arr[1])+(arr[1]-arr[0]);
    cout<<c<<endl;
    return 0;
}
