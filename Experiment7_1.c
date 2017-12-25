#include<stdio.h>
int main(){
	int a,b,c;
	int *ap,*bp,*cp,*m;
	scanf("%d %d %d",&a,&b,&c);
	ap=&a;
	bp=&b;
	cp=&c;
	m=&a;
	if(a>b){
		m=ap;
		ap=bp;
		bp=m;
	}
	if(*ap>c){
		m=ap;
		ap=cp;
		cp=bp;
		bp=m;
	}
	else if(*bp>c){
		m=bp;
		bp=cp;
		cp=m;
	}
	printf("%d\n%d\n%d",*ap,*bp,*cp);
	return 0;
}
