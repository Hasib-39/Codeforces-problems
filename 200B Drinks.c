#include<stdio.h>
#include<math.h>

int main(){
    double sum=0;
    int t,a,i;
    scanf("%d",&t);
    for( i=0;i<t;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%.12lf",(sum/t));
    return 0;
}
