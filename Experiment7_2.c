#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100],str3[100];
	char *p1,*p2,*p3,*p;
	p1=str1;
	p2=str2;
	p3=str3;
	p=str1;
	memset(str1,0,sizeof(str1));//初始化 
	memset(str2,0,sizeof(str2));//初始化 
	memset(str3,0,sizeof(str3));//初始化 
	gets(str1);
	gets(str2);
	gets(str3);
	if(strcmp(str1,str2)>0){
		p=p1;
		p1=p2;
		p2=p;
	}
	if(strcmp(str1,str3)>0){
		p=p1;
		p1=p3;
		p3=p2;
		p2=p;
	}
	else if(strcmp(str2,str3)>0){
		p=p2;
		p2=p3;
		p3=p;
	}
	puts(p1);
	puts(p2);
	puts(p3);
	return 0;
}
