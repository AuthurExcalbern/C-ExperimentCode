#include <stdio.h>
int main(){
	float s=0,t=1;
	int n;
	for (n=1;n<=20;n++){
		t=t*n; //��n!
		s=s+t; //�������ۼ�
	}
	printf("%f\n",s);
	return 0;
}