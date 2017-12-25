#include<stdio.h>
int main(){
	int i,j,m,n[10];//i/j用于计数；m用于替换数组里的两元素 
	for(i=0;i<=9;i++){
		scanf("%d",&n[i]); 
	} 
	for(j=0;j<=8;j++){
		for(i=0;i<9-j;i++){
			if(n[i]>n[i+1]){
				m=n[i];
				n[i]=n[i+1];
				n[i+1]=m;
			}
		}
	}
	for(i=0;i<=9;i++){
		printf("%d ",n[i]);
	} 
	printf("\n");
	return 0;
}
