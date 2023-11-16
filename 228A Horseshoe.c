#include<stdio.h>
int main(){
    long long int a[5],c=0;
    for(int i=0;i<4;i++){
        scanf("%lld",&a[i]);
    }
    for(int j=0;j<=3;j++){
        if(a[j]==a[j+1])
            c++;
    }
    printf("%lld",c);
    return 0;
}
