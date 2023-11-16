#include<stdio.h>
#include<math.h>
int main(){
    double n,m,a;
    long long res;
    scanf("%lf %lf %lf",&n,&m,&a);
    res=(ceil(m/a))*(ceil(n/a));
    printf("%lld",res);
}
