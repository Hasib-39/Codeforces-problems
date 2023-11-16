#include<stdio.h>
#include<string.h>

int main(){
    int n,c=1;
    char a[3],b[3];
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=1;i<n;i++){
        scanf("%s",b);
        if(a[0]!=b[0])
            c++;
        strcpy(a,b);
    }

    printf("%d",c);
    return 0;

}
