#include<stdio.h>
int main(){
    int n,temp,f=0,a;
    scanf("%d",&n);
    temp=0;
    while(temp){
        a=temp%10;
        if(a==4||a==7)
            f=1;
        else{
            f=0;
            break;
        }
        temp=temp/10;
    }
    if(f==1)
        printf("YES");
    else{
        if(!(n%4)||!(n%7)||!(n%44)||!(n%47)||!(n%74)||!(n%77)||!(n%444)||!(n%447)||!(n%474)||!(n%477))
            printf("YES");
        else
            printf("NO");
    }
}
