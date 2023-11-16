#include<stdio.h>
#include<string.h>
int main(){
    int len,i,j;
    char a[100],b[200];
    gets(a);
    len=strlen(a);
    for(i=0,j=0;i<len;i++){
        if(a[i]!='A'&&a[i]!='a'&&a[i]!='E'&&a[i]!='e'&&a[i]!='I'
           &&a[i]!='i'&&a[i]!='O'&&a[i]!='o'&&a[i]!='U'&&a[i]!='u'&&a[i]!='y'&&a[i]!='Y'){
            b[j]='.';
            j++;
            if(a[i]>=65&&a[i]<=90){
                b[j]=a[i]+32;
                j++;
            }
            else
            {
                b[j]=a[i];
                j++;
            }
        }
    }
    b[j]='\0';
    puts(b);
    return 0;
}
