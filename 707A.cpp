#include<iostream>
using namespace std;
int main(){
    int n,m,col=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            int c=arr[i][j];
            if(c=='C'||c=='M'||c=='Y'){
                col=1;
            }
        }
    }
    if(col)
        cout<<"#Color";
    else
        cout<<"#Black&White";
    return 0;    
}