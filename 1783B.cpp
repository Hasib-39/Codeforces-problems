#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        int bg=1,en=n*n;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(j%2==0){
                        arr[i][j]=bg;
                        bg++;
                    }
                    else{
                        arr[i][j]=en;
                        en--;
                    }
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    if(j%2==0){
                        arr[i][j]=en;
                        en--;
                    }
                    else{
                        arr[i][j]=bg;
                        bg++;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}