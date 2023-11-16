#include<stdio.h>
int main(){
    int a[100],sum=0,temp,n,count=0,j=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        j=j+a[i];
        count++;
        if(j>sum/2)
            break;
    }
    printf("%d",count);

}
