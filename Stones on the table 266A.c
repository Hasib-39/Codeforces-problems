#include<stdio.h>
int main(){
    int n,b=0,i;
    char a[50];
    scanf("%d\n",&n);
    scanf("%s",a);
    for(i=1;i<n;i++){
        if(a[i-1]==a[i])
            b++;
        }
    printf("%d",b);
    return 0;
}
