#include<stdio.h>
#include<string.h>
int main(){
	char x[100];//���ڱ��������String 
	int i,a=0,b=0,c=0,d=0,num=0;//num���ڼ���String�ĳ���,Ӣ����ĸa,�ո�b,����c,�����ַ�d
	memset(x,0,sizeof(x));//��ʼ�� 
	scanf("%[^\n]s",x);//ע�⣺�����Լӡ�&�� 
	num=strlen(x);
	for(i=0;i<=num-1;i++){
		if(('A'<=x[i]&&x[i]<='Z')||('a'<=x[i]&&x[i]<='z')){
			a++;
		}
		else if(x[i]==' '){
			b++;
		}
		else if('0'<=x[i]&&x[i]<='9'){
			c++;
		}
		else{
			d++;
		}
	}
	printf("%d %d %d %d",a,c,b,d);
}
