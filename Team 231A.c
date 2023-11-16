#include<stdio.h>
int main(){
    int n,count=0,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a==1){
            if(b==1||c==1)
                count++;
        }
        else if(a==0){
            if(b==1&&c==1)
                count++;
        }
    }
    printf("%d",count);
}
