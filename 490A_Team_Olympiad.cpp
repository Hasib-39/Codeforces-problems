#include <iostream>
using namespace std;
main(){
	int n,y,i,x;
	cin>>n;
	int count[4],index[4][5010];
	for(i=0;i<n;i++){
	cin>>x;
	count[x]++;
	index[x][count[x]]=i+1;}
	y=min(count[1],min(count[2],count[3]));
	cout<<y<<"\n";
	for(i=1;i<=y;i++)
	cout<<index[1][i]<<" "<<index[2][i]<<" "<<index[3][i]<<"\n";
}
