#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a==1){
            printf("HARD");
            break;
        }
        else
            continue;
    }
    if(a==0)
        printf("EASY");
}
