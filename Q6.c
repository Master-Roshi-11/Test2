//DAY 1
//Question 6
//6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2pr 2 + 2prh, 
//volume = p r 2 h). Define a constant variable pi=3.14.
#include<stdio.h>
int main()
{
	float r,h;
	const float pi=3.14;
	float SA,V;
	printf("Enter Radius of Cylinder :- ");
	scanf("%f",&r);
	printf("Enter Height of Cylinder :- ");
	scanf("%f",&h);
	SA=(2*pi*r*r)+(2*pi*r*h);
	V=pi*r*r*h;
	printf("Surface Area of Cylinder :- %f\n",SA);
	printf("Volume of Cylinder :- %f",V);
	
	return 0;
}
