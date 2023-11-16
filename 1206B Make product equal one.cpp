#include<iostream>
using namespace std;
int main(){
    long long int n,count=0,a,neg=0,zero=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==0)
            zero++;
        if(a<0)
            neg++;
        count+=(a<0 ? -1-a : (a>0 ? a-1 : 0));
    }
    cout<<(neg%2==0 ? count+zero : (zero!=0 ? count+zero : count+2) )<<endl;
    return 0;

}
