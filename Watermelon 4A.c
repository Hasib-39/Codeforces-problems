#include<stdio.h>
int main(){
    int w,i,c=0;
    scanf("%d",&w);
    for(i=2;i<=w/2;i+=2){
        if((w-i)%2==0)
           c=1;
    }
    if(c==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
