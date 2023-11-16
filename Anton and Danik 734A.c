#include<stdio.h>
int main(){
    int n,b=0,c=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='A')
            b++;
        else
            c++;
    }
    if(b>c)
        printf("Anton");
    else if(c>b)
        printf("Danik");
    else if(b==c)
        printf("Friendship");
    return 0;

}
