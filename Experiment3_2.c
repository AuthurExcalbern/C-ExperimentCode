#include<stdio.h>
int main(){
	//Ҫ������ɼ��ȼ�'A','B','C','D,'E'��90������Ϊ'A',80-89��Ϊ'B',70-79��Ϊ'C',60-69��Ϊ'D',60������Ϊ'E'��
	int a;
	char b; 
	scanf("%d",&a);
	if(a<=100&&a>=90){
		printf("A");
		b='A';
	}
	else if(a<90&&a>=80){
		printf("B");
		b='B';
	}
	else if(a<80&&a>=70){
		printf("C");
		b='C';
	}
	else if(a<70&&a>=60){
		printf("D");
		b='D';
	}
	else if(a<60&&a>=0){
		printf("E");
		b='E'; 
	}
	else{
		printf("wrong number");
	}
	return 0;
}
