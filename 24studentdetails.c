#include<stdio.h>
#include<string.h>	
struct Student{
	char firstname[50],lastname[50];
	int mark[6],rank;
	int sum;
	float avg;
};
int main(){
	struct Student student[60];
	int n,i,j,opt,temp;
	printf(" Enter Number of students (max 60) : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf(" Enter Firstname and lastname of student %d (Seperated by space) : ",i+1);
		scanf("%s%s",(student[i].firstname),(student[i].lastname));
		student[i].sum=0;
		for(j=0;j<4;j++){
			printf(" Enter mark of %s in subject %d  :  ",student[i].firstname,j+1);
			scanf("%d",&(student[i].mark[j]));
			student[i].sum+=(student[i].mark[j]);
		}
		student[i].avg=student[i].sum/4;
	}
	printf("\nData Entered Successfully ! \n");
	
	while(1){
		printf("\n  Enter Option :\n\t\t1.Display\n\t\t2.Edit\n\t\t3.Add\n\t\t4.Exit\n");
		scanf("%d",&opt);
		if(opt==1){
			printf("|  Roll No.  |        Name	      |       Marks     |   Total  |    Avg   |\n");
			for(i=0;i<n;i++){
			printf("|%12d|",i+1);
			printf("%10s %10s",(student[i].firstname),(student[i].lastname));
				printf(" ");
			printf("  | ");
			for(j=0;j<4;j++)
				printf("%3d ",(student[i].mark[j]));
			printf("|%10d|%10.2f|\n",student[i].sum,student[i].avg);  
		}
	}
	else if(opt==2){
		printf(" Enter Roll no to edit : ");
		scanf("%d",&i);
		i--;
		printf(" Enter Firstname and lastname of student %d (Seperated by space) : ",i+1);
		scanf("%s%s",(student[i].firstname),(student[i].lastname));
		student[i].sum=0;
		for(j=0;j<4;j++){
			printf(" Enter mark of %s in subject %d  :  ",student[i].firstname,j+1);
			scanf("%d",&(student[i].mark[j]));
			student[i].sum+=(student[i].mark[j]);
		}
		student[i].avg=student[i].sum/4;
		printf(" Updated \n");
	}
  else	if(opt==3){
		i=n;
		n++;
		printf(" Enter Firstname and lastname of student %d (Seperated by space) : ",i+1);
		scanf("%s%s",(student[i].firstname),(student[i].lastname));
		student[i].sum=0;
		for(j=0;j<4;j++){
			printf(" Enter mark of %s in subject %d  :  ",student[i].firstname,j+1);
			scanf("%d",&(student[i].mark[j]));
			student[i].sum+=(student[i].mark[j]);
		}
		student[i].avg=student[i].sum/4;
		printf(" Added \n");
	}
	else
		break;		
	
}}

		
