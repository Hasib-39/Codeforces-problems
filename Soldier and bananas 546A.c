#include<stdio.h>
int main(){
    int k,n,w,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        sum=sum+i*k;
    }
    if(sum>n)
        printf("%d",sum-n);
    else
        printf("0");
    return 0;
}
