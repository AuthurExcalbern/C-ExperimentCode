#include<stdio.h>
double av_stu[10],av;
int main(){
	void averages_stu(int (*sp)[5]);
	void averages_cour(int (*cp)[5]);
	int averages_com();
	int i,score[10][5],(*p)[5],max_stu,b;//i、j分别用于外循环计数和内循环计数
	p=score;
	for(i=0;i<=9;i++){
			scanf("%d %d %d %d %d",&score[i][0],&score[i][1],&score[i][2],&score[i][3],&score[i][4]);
	}
	printf("Part 1: the averages of every student\n");
	averages_stu(p);
	printf("Part 2: the averages of every course score\n");
	averages_cour(p);
	max_stu=averages_com();
	b=max_stu+1;
	printf("Part 3: a student  and  course scores of the student whose average is the highest\n%d\n",b);
	for(i=0;i<=3;i++){
		printf("%d ",score[max_stu][i]);
	}
	printf("%d",score[max_stu][4]);
	printf("\n");
	return 0;
}
void averages_stu(int (*sp)[5]){
	int i,j,sum=0;//i、j分别用于外循环计数和内循环计数
	for(i=0;i<=9;i++){
		for(j=0;j<=4;j++){
			sum=sum+*(*(sp+i)+j);
		}
		av_stu[i]=sum/5.0;
		printf("%2.6f\n",av_stu[i]);
		sum=0;
	}
}
void averages_cour(int (*cp)[5]){
	int i,j,sum=0;//i、j分别用于外循环计数和内循环计数
	for(j=0;j<=4;j++){
		for(i=0;i<=9;i++){
			sum=sum+*(*(cp+i)+j);
		}
		av=sum/10.0;
		printf("%2.6f\n",av);
		sum=0;
	}
}
int averages_com(){
	int i;
	int max=0;
	double m=av_stu[0];
	for(i=1;i<=9;i++){
		if(m<av_stu[i]){
			max=i;
			m=av_stu[i];
		}
	}
	return max;
}
