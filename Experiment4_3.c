#include<stdio.h>
int main(){
	int i,x=1;
	for(i=9;i>=1;i--){
		x=2*(x+1);
	}
	printf("%d",x);
	/* 
	//�������
	x=1;
	for(i=9;i>=1;i--){
		x=2*(x+2);
	} 
	printf("��һ�칲ժ��%d������",x);
	*/ 
	return 0;
} 
