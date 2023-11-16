#include<iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int one=0,two=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1)
                one++;
            else
                two++;
        }
        cout<<((one%2 || (two%2 && one<2))?"NO":"YES")<<endl;
    }
    return 0;
}