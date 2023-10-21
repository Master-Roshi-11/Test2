//DAY 1
//Question 5
//5. Accept two numbers and swap two numbers using 
//i) Third variable
//ii) By performing arithmetic operations.
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter 2 Nos : ");
	scanf("%d %d",&x,&y);
	printf("Before Swapping X = %d & Y = %d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After Swapping X = %d & Y = %d",x,y);
	return 0;
}
