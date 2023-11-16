#include<stdio.h>
int main(){
    int n,a[100],b[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]-1]=(i+1);
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;

}
