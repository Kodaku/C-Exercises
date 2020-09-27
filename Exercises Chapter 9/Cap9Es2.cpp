#include<stdio.h>
#include<stdlib.h>

double power(double base, int exponent);

int main(void)
{
	double x, result;
	int n;
	
	printf("Enter the base and the exponent of a power: ");
	scanf("%lf %d", &x, &n);
	
	result = power(x, n);
	
	printf("The result of %f^%d is %f", x, n, result);
	
	exit(0);
}

double power(double base, int exponent)
{
	if(exponent == 0)
	{
		return 1;
	}
	else
	{
		if(exponent % 2 == 0)
		{
			return power(base, exponent / 2) * power(base, exponent / 2);
		}
		else
		{
			return base * power(base, exponent - 1);
		}
	}
}
