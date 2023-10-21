//DAY 1
//Question 4
/*4. Accept the basic salary of an employee and 
	compute the net salary after adding earnings and subtracting 
	deductions.
 	PF is 2 % of basic
 	Tax is 3 % of basic
 	HRA is 5 % basic
 	DA is 8 % of basic*/
#include<stdio.h>
int main()
{
	float basic,PF,Tax,HRA,DA,netsalary;
	printf("Enter Basic Salary : ");
	scanf("%f",&basic);
	PF=basic*0.02;
	Tax=basic*0.03;
	HRA=basic*0.05;
	DA=basic*0.08;
	netsalary=basic+HRA+DA-PF-Tax;
	printf("Net Salary : %f ",netsalary);
	
	return 0;
}
