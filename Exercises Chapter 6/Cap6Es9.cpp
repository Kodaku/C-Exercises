#include<stdio.h>

int main()
{
	int n, factorial, i, j;
	float e;
	
	printf("Enter the maximum n! denominator to calculate the constant \"e\": ");
	scanf("%d", &n);
	
	e = 0.0;
	for(i = 1; i < n; i++)
	{
		factorial = 1;
		for(j = 1; j < i; j++)
		{
			factorial *= j;
		}
		e += 1.0 / factorial;
	}
	
	printf("The approximate value of the neperian number is: %.12f", e);
	
	return 0;
}
