#include<stdio.h>
int main(){
    int b=0,c=0;
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=97&&a[i]<=122)
            b++;
        else if(a[i]>=65&&a[i]<=90)
            c++;
    }
    if(b>=c){
        for(int i=0;a[i]!='\0';i++){
            if(a[i]>=97&&a[i]<=122)
                continue;
            else if(a[i]>=65&&a[i]<=90)
                a[i]=a[i]+32;
            }
            puts(a);
    }
    else{
        for(int i=0;a[i]!='\0';i++){
            if(a[i]>=65&&a[i]<=90)
                continue;
            else if(a[i]>=97&&a[i]<=122)
                a[i]=a[i]-32;
            }
            puts(a);
    }
    return 0;
}
