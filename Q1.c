//DAY 1
//Question 1
//1. Accept the radius from user and compute the area 
//   and circumference of a circle

#include<stdio.h>
int main()
{
	float PI=3.14;
	float r,area,circum;
	printf("Enter Radius of Circle : ");
	scanf("%f",&r);
	area=PI*r*r;
	circum=2*PI*r;
	printf("Area of Circle : %f",area);
	printf("\nCircumference of Circle : %f",circum);
	return 0;
}
