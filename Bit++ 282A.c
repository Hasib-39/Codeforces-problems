#include<stdio.h>
int main(){
    int n,x=0;
    char str[10];
    scanf("%d",&n);
    while(n--){
        scanf("%s",str);
        if(str[1]=='+')
            x++;
        else if(str[1]=='-')
            x--;
    }

    printf("%d",x);
}
