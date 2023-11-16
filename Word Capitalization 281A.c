#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    gets(a);
    if(a[0]>=97&&a[0]<=122)
        a[0]=a[0]-32;
        puts(a);
        return 0;

}
