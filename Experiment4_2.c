#include<stdio.h>
#include<string.h>
int main(){
	char x[100];//用于保存输入的String 
	int i,a=0,b=0,c=0,d=0,num=0;//num用于技术String的长度,英文字母a,空格b,数字c,其它字符d
	memset(x,0,sizeof(x));//初始化 
	scanf("%[^\n]s",x);//注意：不可以加“&” 
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
