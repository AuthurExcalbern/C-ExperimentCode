#include <stdio.h>
int main(){
	float s=0,t=1;
	int n;
	for (n=1;n<=20;n++){
		t=t*n; //求n!
		s=s+t; //将各项累加
	}
	printf("%f\n",s);
	return 0;
}
