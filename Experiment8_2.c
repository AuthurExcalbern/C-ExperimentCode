#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LEN sizeof(struct Student)
struct Student{
	char num[6];
	char name1[10];
	char name2[10];
	char sex;
	int age;
	struct Student *next;
}stu[101];
int main(int argc, char const *argv[]){
	int i,length,iage,flag=1;
	struct Student *p,*pt,*head;
	int find=0;
	while(flag==1){
		scanf("%d",&length);
		if(length<101) flag=0;
	}
	//½¨Á¢Á´±í
	for(i=0;i<length;i++){
		p=(struct Student*)malloc(LEN);
		if(i==0) head=pt=p;
		else pt->next=p;
		pt=p;
		scanf("%s",p->num);
		scanf("%s",p->name1);
		scanf("%s",p->name2);
		scanf("%c",&p->sex);
		scanf("%d",&p->age);
	}
	p->next=NULL;
	p=head;
	while(p!=NULL){
		printf("%s\n%s %s\n%c\n%d\n",p->num,p->name1,p->name2,p->sex,p->age);
		p->next;
	}
	scanf("%d",&iage);
	pt=head;
	p=pt;
	if(pt->age==iage){
		p=pt->next;
		head=pt=p;
		find=1;
	}
	else pt=pt->next;
	while(pt!=NULL){
		if(pt->age==iage){
			p->next=pt->next;
			find=1;
		}
		else p=pt;
		pt=pt->next;
	}
	if(!find) printf("Can't find!");
	else printf("Delete success!");
	p=head; 
	return 0;
}
