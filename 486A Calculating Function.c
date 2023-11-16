#include<stdio.h>
int main(){
    long long int n,sum=0,x;
    scanf("%lld",&n);
        if(n%2){
            sum=-(n+1)/2;
        }
        else
            sum=n/2;
    printf("%lld",sum);
    return 0;
}
