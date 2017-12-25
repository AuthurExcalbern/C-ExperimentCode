#include<stdio.h>
#define I 10
struct Stu
{
	int num;
	char name1[10];
	char name2[10];
	char sex;
	int score[5];
}stu[10];
int i,j;
int main()
{
	int n[10];
	FILE *fstu;
	void input();
	input();
	fstu=fopen("stu.c","w+");
	for(i=0;i<10;i++)
	{
		fprintf(fstu,"%d",&stu[i].num);
		fprintf(fstu,"%s %s",stu[i].name1,stu[i].name2);
		fprintf(fstu,"%c",&stu[i].sex);
		for (j = 0; j < 5; j++)
		{
			scanf("%d",&stu[i].score[j]);
		}
	}
	fclose(fstu);
	return 0;
}
void input(){
	for ( i = 0; i < I; i++)
	{
		scanf("%d",&stu[i].num);
		scanf("%s %s",stu[i].name1,stu[i].name2);
		scanf("%c",&stu[i].sex);
		for (j = 0; j < 5; j++)
		{
			scanf("%d",&stu[i].score[j]);
		}
	}
}
