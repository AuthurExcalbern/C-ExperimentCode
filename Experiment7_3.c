#include<stdio.h>
int main(){
	void tran(int (*p)[3]);
	int i,a[3][3],(*ap)[3];
	ap=a;
	for(i=0;i<=2;i++){
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	tran(ap);
	for(i=0;i<2;i++){
		printf("%d %d %d\n",*(*(ap+i)+0),*(*(ap+i)+1),*(*(ap+i)+2));
	}
	printf("%d %d %d\n",*(*(ap+2)+0),*(*(ap+2)+1),*(*(ap+2)+2));
	return 0;
}
void tran(int (*p)[3]){
	int sp;
	sp=*(*(p+0)+1);
	*(*(p+0)+1)=*(*(p+1)+0);
	*(*(p+1)+0)=sp;
	sp=*(*(p+0)+2);
	*(*(p+0)+2)=*(*(p+2)+0);
	*(*(p+2)+0)=sp;
	sp=*(*(p+1)+2);
	*(*(p+1)+2)=*(*(p+2)+1);
	*(*(p+2)+1)=sp;
} 
