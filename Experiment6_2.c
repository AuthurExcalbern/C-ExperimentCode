#include<stdio.h>
#include<string.h>
int main(){
	void countChar(char str[],int n,int *ac,int *bc,int *cc,int *dc);
	char x[100],*string;//���ڱ��������String 
	int num=0;//num���ڼ���String�ĳ���
	int a=0,b=0,c=0,d=0;//Ӣ����ĸa,�ո�b,����c,�����ַ�d
	int *ap,*bp,*cp,*dp;//prarameter(����) 
	string=x;
	ap=&a;bp=&b;cp=&c;dp=&d;
	memset(x,0,sizeof(x));//��ʼ�� 
	scanf("%[^\n]s",x);//ע�⣺�����Լӡ�&�� 
	num=strlen(x);
	countChar(string,num,ap,bp,cp,dp);
	printf("%d %d %d %d",a,c,b,d);
}
void countChar(char str[],int n,int *ac,int *bc,int *cc,int *dc){
	int i;
	for(i=0;i<=n-1;i++){
		if(('A'<=str[i]&&str[i]<='Z')||('a'<=str[i]&&str[i]<='z')){
			(*ac)++;
		}
		else if(str[i]==' '){
			(*bc)++;
		}
		else if('0'<=str[i]&&str[i]<='9'){
			(*cc)++;
		}
		else{
			(*dc)++;
		}
	}
}
