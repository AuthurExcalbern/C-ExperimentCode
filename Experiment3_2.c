#include<stdio.h>
int main(){
	//要求输出成绩等级'A','B','C','D,'E'。90分以上为'A',80-89分为'B',70-79分为'C',60-69分为'D',60分以下为'E'。
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
