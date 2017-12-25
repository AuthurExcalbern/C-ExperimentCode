#include<stdio.h>
#define SWAP(m,n,l) l=n;n=m;m=l
int main(){
	int i,j,k;
	scanf("%d %d",&i,&j);
	SWAP(i,j,k);
	printf("%d %d",i,j);
}
