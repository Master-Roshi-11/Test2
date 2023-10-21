//DAY 1
//Question 3
//3. Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the 
//percentage also

#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float per=0;
	printf("Enter Marks of 5 Subjects : ");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	per=total/500.0;
	printf("Total Marks :- %d/500",total);
	printf("\n Percentage :- %f ",per*100);
	return 0;
}
