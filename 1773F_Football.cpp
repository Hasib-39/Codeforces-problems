#include<iostream>
using namespace std;
int main(){
    long long n,a,b;
    cin>>n>>a>>b;
    long long y=n;
    if(n==1){
        if(a==b)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        cout<<a<<":"<<b<<endl;
        return 0;
    }
    else if((a+b)<n){
        cout<<n-(a+b)<<endl;
        long long m=n-(a+b);
        while(a--){
            cout<<1<<":"<<0<<endl;
        }
        while(b--){
            cout<<0<<":"<<1<<endl;
        }
        while(m--){
            cout<<0<<":"<<0<<endl;
        }
        return 0;
    }
    else if((a+b)>=n){
        cout<<0<<endl;
        if(a==0){
            while(n>0){
                if(n==1&&b>0){
                    cout<<0<<":"<<b<<endl;
                    break;
                }
                cout<<0<<":"<<1<<endl;
                b--;
                n--;
            }
        }
        else if(b==0){
            while(n>0){
                if(n==1&&a>0){
                    cout<<a<<":"<<0<<endl;
                    break;
                }
                cout<<1<<":"<<0<<endl;
                a--;
                n--;
            }
        }
        else if(a>0 && b>0){
            while(n>0){
                if(n==2 && a==b){
                    cout<<a-1<<":"<<b<<endl;
                    cout<<1<<":"<<0<<endl;
                    n-=2;
                    return 0;
                }
                if(n==1 && ((a>b)||(b>a))){
                    cout<<a<<":"<<b<<endl;
                    n--;
                    return 0;
                }
                if(y%2){
                    if(n%2){
                        cout<<1<<":"<<0<<endl;
                        a--;
                        n--;
                    }
                    else{
                        cout<<0<<":"<<1<<endl;
                        b--;
                        n--;
                    }
                }
                else if(y%2!=0){
                        cout<<1<<":"<<0<<endl;
                        cout<<0<<":"<<1<<endl;
                        a--;
                        b--;
                        n-=2;
                }
            }
        }
    }
    return 0;
}
