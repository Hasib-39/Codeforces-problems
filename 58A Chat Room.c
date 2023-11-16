#include<stdio.h>
#include<string.h>
int main(){
    int n=5,c=0,x=0;
    char a[5]="hello",b[500];
    gets(b);
    for(int i=0;b[i]!='\0';i++){
        if(b[i]==a[x]){
            c++;
            x++;
        }
        if(c==5)
            break;
    }
    if(c==5)
        printf("YES");
    else
        printf("NO");
    return 0;
}
