#include<stdio.h>
double av_stu[4],av;
int score[4][5];
int main(){
	void averages_stu(int (*sp)[5]);
	void averages_cour(int (*cp)[5]);
	void averages_com();
	int i,(*p)[5],max_stu,b[5];//i、j分别用于外循环计数和内循环计数
	p=score;
	for(i=0;i<=3;i++){
			scanf("%d %d %d %d %d %d",&score[i][0],&score[i][1],&score[i][2],&score[i][3],&score[i][4],&b[i]);
	}
	printf("The average score of course 1 is:");
	averages_cour(p);
	printf("\n");
	averages_stu(p);
	printf("\n");
	averages_com();
	return 0;
}
void averages_cour(int (*cp)[5]){
	int j,sum=0;
	for(j=0;j<=3;j++){
		sum=sum+*(*(cp+j)+0);
	}
	av=sum/4.0;
	printf("%2.2f\n",av);
}
void averages_stu(int (*sp)[5]){
	int i,j,sum=0;//i、j分别用于外循环计数和内循环计数
	for(i=0;i<=3;i++){
		for(j=0;j<=4;j++){
			sum=sum+*(*(sp+i)+j);
		}
		av_stu[i]=sum/5.0;
		sum=0;
	}
	for(i=0,j=0;i<=3;i++){
		if(score[i][0]<60) j++;
		if(score[i][1]<60) j++;
		if(score[i][2]<60) j++;
		if(score[i][3]<60) j++;
		if(score[i][4]<60) j++;
		if(j>=2){
			j=i+1;
			printf("The student number is:  %d\n",j);
			printf("The student's every course score are:%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,\n",(double)score[i][0],(double)score[i][1],(double)score[i][2],(double)score[i][3],(double)score[i][4]);
			printf("The student's average score is:%2.2f\n",av_stu[i]);
		}
		j=0;
	}
}
void averages_com(){
	int i,j;
	for(i=0;i<=3;i++){
		if(av_stu[i]>90){
			j=i+1;
			printf("student %d average score is above 90\n",j);
			j=0;
		}
		if(score[i][0]>85&&score[i][1]>85&&score[i][2]>85&&score[i][3]>85&&score[i][4]>85){
			j=i+1;
			printf("student %d every score is above 85\n",j);
			j=0;
		}
	}
}
