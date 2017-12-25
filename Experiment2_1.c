#include<stdio.h>
int main(){
	int i;
	char c[5];
	for(i=0;i<=4;i++){
		c[i]=getchar();
	}
	for(i=0;i<=4;i++){
		if(c[i]<='z'&&c[i]>='a'){
			if(c[i]>'v') c[i]-=22;
			else c[i]+=4;
			printf("%c",c[i]);
		}
	}
	return 0;
}
