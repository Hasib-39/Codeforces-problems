#include<stdio.h>
int main(){
    int x,y,j;
    char a[100];
    scanf("%d %d",&x,&y);
    scanf("%s",a);
    for(int i=0;i<y;i++){
        for( j=0;a[j]!='\0';j++){
            if(a[j]=='B'&&a[j+1]=='G'){
                a[j]='G';
                a[j+1]='B';
                j++;
            }
        }
    }
    printf("%s",a);
    return 0;
}
