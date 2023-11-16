#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    char a[100],b[100];
    gets(a);
    gets(b);
    n=strlen(b);
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        if(a[i]==b[j])
            count++;
    }
    if(count==n)
        printf("YES");
    else
        printf("NO");

}
