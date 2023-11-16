#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int sum=0;
    if (n== 0) {
        printf("0");
        return 0;
    }

   int binaryNum[32];
   int i=0;

   while(n > 0){
      binaryNum[i++] = n % 2;
      n /= 2;
   }
   for(int j=0;j<i;j++){
        if(binaryNum[j]==1)
            sum++;
   }
    cout<<sum<<endl;
    return 0;
}
