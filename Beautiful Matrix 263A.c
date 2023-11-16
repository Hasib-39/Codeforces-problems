#include<stdio.h>
#include<math.h>
int main(){
    int a[6][6],r,c,res;
    for(r=1;r<6;r++){
        for(c=1;c<6;c++){
            scanf("%d",&a[r][c]);
            if(a[r][c]==1){
                res=abs(3-r)+abs(3-c);
                printf("%d",res);
            }
        }
    }
}
