#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,d,h,a,b,f,g;
        cin>>w>>d>>h;
        cout<<"\n";
        cin>>a>>b>>f>>g;
        cout<<h+abs(a-f)+abs(b-g)+2*min({a,b,w-a,d-b,f,g,w-f,d-g})<<"\n";
    }
    return 0;
}
