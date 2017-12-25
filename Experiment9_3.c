#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	FILE *fA,*fB,*fC;
	int i,j,x;
	char str_A[100],str_B[100],c[200],key;
	scanf("%s",str_A);
	scanf("%s",str_B);
	fA=fopen("A","w+");
	fB=fopen("B","w+");
	fC=fopen("C","w+");
	fputs(str_A,fA);
	fputs(str_B,fB);
	printf("the content of file A:%s\n",str_A);
	printf("the content of file B:%s\n",str_B);
	//以下采用插入法排序 
	for(i=1;str_A[i]!='\0';i++)
	{
		key=str_A[i];
		j=i-1;
		while(j>=0&&str_A[j]>key)
		{
			str_A[j+1]=str_A[j];
			j=j-1;
		}
		str_A[j+1]=key;
	}
	for(i=1,j=0;str_B[i]!='\0';i++)
	{
		key=str_B[i];
		j=i-1;
		while(j>=0&&str_B[j]>key)
		{
			str_B[j+1]=str_B[j];
			j=j-1;
		}
		str_B[j+1]=key;
	}
	for(i=0,j=0,x=0;(str_A[i]!='\0')&&(str_B[j]!='\0');x++)
	{
		if(str_A[i]<str_B[j])
		{
			c[x]=str_A[i];
			i++;
		}
		else
		{
			c[x]=str_B[j];
			j++;
		}
	}
	for(;str_A[i]!='\0'&&str_B[j]=='\0';x++,i++)	c[x]=str_A[i];
	for(;str_A[i]=='\0'&&str_B[j]!='\0';x++,j++)	c[x]=str_B[j];
	fputs(c,fC);
	printf("the content of file C:%s\n",c);
	fclose(fA);
	fclose(fB);
	fclose(fC);
	return 0;
} 
