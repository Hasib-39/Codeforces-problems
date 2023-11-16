#include<stdio.h>
#include<string.h>
void capital(char a[100]){
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=97)
            a[i]=a[i]-32;
    }
}
int main(){
    char a[100],b[100];
    gets(a);
    gets(b);
    capital(a);
    capital(b);
    int i=strcmp(a,b);
    printf("%d",i);
    return 0;
}

