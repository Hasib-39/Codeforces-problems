#include<stdio.h>
#include<string.h>
int main(){
    int t,i,l;
    char str[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
            scanf("%s",str);
            l=strlen(str);
            if(l>10)
                printf("%c%d%c\n",str[0],l-2,str[l-1]);
            else
                printf("%s\n",str);
        }

}
