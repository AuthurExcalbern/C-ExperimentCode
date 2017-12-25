#include <stdio.h>
int main(){
	int number[15],n,i,a,b,mid;//n为输入的数，i用于计数,a、b、mid都用于 折半查找法
	for(i=0;i<15;i++){
		scanf("%d",&number[i]);
	}
	scanf("%d",&n);
	//折半查找法
	a=0;
	b=14;
	while(a<=b){
		mid=(a+b)/2;
		if(n==number[mid]){
			//mid=mid+1;
			printf("%d",mid);
			break;
		}
		else if(n>number[mid]) a=mid+1;
		else b=mid-1;
	}
	if(a>b) printf("The number is not in the list");
	return 0;
}
