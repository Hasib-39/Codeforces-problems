#include<stdio.h>
int main(){
    int n,h,a,count=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>h)
            count+=2;
        else
            count++;
    }
    printf("%d",count);
    return 0;
}
