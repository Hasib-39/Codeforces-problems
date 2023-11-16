#include<stdio.h>
int main(){
    int n;
    char a[10]="I hate",b[10]="I love",c[5]="that",d[3]="it";
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n==1){
            printf("%s ",a);
            break;
        }
        if(i%2)
            printf("%s ",a);
        else
            printf("%s ",b);
        if(i<n)
            printf("%s ",c);
    }
    printf("%s",d);
    return 0;
}
