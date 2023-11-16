#include<iostream>
#include<string>
using namespace std;
int main(){
    long long int n;
    int count=0;
    cin>>n;
    string a;
    a=to_string(n);
    for(int i=0;i<a.size();i++){
        if(a[i]=='4'||a[i]=='7')
            count++;
    }
    if(count==4||count==7)
        printf("YES");
    else
        printf("NO");
}
