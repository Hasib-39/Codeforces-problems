#include<stdio.h>
int main (){
    int count=0;
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        for(int j=i+1;j<i+7;j++){
            if(a[i]==a[j])
                count=1;
            else{
                count=0;
                break;
            }
        }
        if(count)
            break;
    }
   if(count)
    printf("YES\n");
    else if(!count)
        printf("NO\n");
    }

