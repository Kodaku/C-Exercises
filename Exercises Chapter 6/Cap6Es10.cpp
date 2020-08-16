#include<stdio.h>

int main()
{
	int n, i, j, factorial;
	float epsilon, e, approximation;
	
	do
	{
	printf("Enter the precision of the neperian number: ");
	scanf("%f", &epsilon);
 	}while(epsilon > 0.01);
 	
 	n = 1;
 	factorial = 1;
 	approximation = 1;
 	
 	while(epsilon < approximation)
 	{
 		e = 0.0;
 		for(i = 1; i < n; i++)
 		{
 			factorial = 1;
 			for(j = 1; j < i; j++)
 			{
 				factorial *= j;
			}
			approximation = 1.0 / factorial;
			e += approximation;
		}
		n++;
	}
	
	printf("The approximate value of the neperian number is: %.30f", e);
	
	return 0;
}
