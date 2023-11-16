#include<stdio.h>
int main(){
    int yr,a,b,c,d,ans;
    scanf("%d",&yr);
    while(5)
    {
       yr++;
       ans=yr;
       a=yr%10;
       yr=yr/10;
       b=yr%10;
       yr=yr/10;
       c=yr%10;
       yr=yr/10;
       d=yr%10;
       if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
        printf("%d",ans);
        break;
        }
        yr=ans;
    }
}
