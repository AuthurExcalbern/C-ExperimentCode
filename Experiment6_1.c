#include<stdio.h>
int main(){
	int getNum;
	int judgePrime(int n);
	scanf("%d",&getNum);
	if(judgePrime(getNum)) printf("The number %d is a prime number",getNum);
	else printf("The number %d is not a prime number",getNum);
	return 0;
} 
int judgePrime(int n){
	int i;
	if(n>2){
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				return 0;
				break;
			}
		}
		if(i>n/2) return 1;
	}
	else if(n==2) return 1;
	else return 0;
}
