#include<stdio.h>
int main(){
    int c=0;
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){
            c=1;
            break;
        }
    }
    if(c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
