#include<stdio.h>
int main(){
    char a[500],b[500];
    gets(a);
    gets(b);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b[i])
            a[i]='0';
        else
            a[i]='1';
    }
    puts(a);
    return 0;
}
