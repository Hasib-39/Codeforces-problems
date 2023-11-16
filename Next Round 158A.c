#include<stdio.h>
int main(){
    int n,k,str[100],count=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&str[i]);
    }
    for(int i=0;i<n;i++){
        if(str[i]>=str[k-1]&&str[i]>0)
            count++;
     }
    printf("%d",count);
}
