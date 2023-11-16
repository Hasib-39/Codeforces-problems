#include<stdio.h>
int main(){
    int b=0,c=0;
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]==a[j]){
                b=1;
                break;
            }
        }
        if(b==0)
            c++;
        b=0;
    }
    if(c%2)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
    return 0;
}
