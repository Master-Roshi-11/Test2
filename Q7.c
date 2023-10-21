//DAY 1
//Question 7
//7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) 
//   and Kelvin (K) (Hint: C=5/9(F-32), K = C + 
//   273.15)

#include<stdio.h>
int main()
{
	float F;
	float C,K;
	printf("Enter Temprature in Fahrenheit :- ");
	scanf("%f",&F);
	C=(5/9.0)*(F-32);
	K=C+273.15;
	printf("Temprature in Celcius : %f\n",C);
	printf("Temprature in Kelvin : %f",K);
	return 0;
}

