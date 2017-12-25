#include<stdio.h>
int main(){
	int i,x=1;
	for(i=9;i>=1;i--){
		x=2*(x+1);
	}
	printf("%d",x);
	/* 
	//多吃两个
	x=1;
	for(i=9;i>=1;i--){
		x=2*(x+2);
	} 
	printf("第一天共摘了%d个桃子",x);
	*/ 
	return 0;
} 
