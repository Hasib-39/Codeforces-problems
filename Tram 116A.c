#include<stdio.h>
int main(){
    int n,sum=0,a,b,max;
    scanf("%d",&n);
    max=sum;
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        sum=sum-a+b;//m for max
        if(sum>max)
            max=sum;
        else
            continue;
    }
    printf("%d",max);
}
