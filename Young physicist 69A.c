#include<stdio.h>
int main(){
    long long n,sum1=0,sum2=0,sum3=0,count=0;
    scanf("%lld",&n);
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        sum1=sum1+a[i][0];
        sum2=sum2+a[i][1];
        sum3=sum3+a[i][2];

    }
    if(!sum1)
        count++;
    if(!sum2)
        count++;
    if(!sum3)
        count++;
    if(count==3)
        printf("YES");
    else
        printf("NO");

    return 0;
}
