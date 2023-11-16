#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<-1;
        return 0;
    }
    int arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    for(int i=1;i<n;i++){
        if(2*i<=n){
            int temp;
            temp=arr[2*i-1];
            arr[2*i-1]=arr[2*i];
            arr[2*i]=temp;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
