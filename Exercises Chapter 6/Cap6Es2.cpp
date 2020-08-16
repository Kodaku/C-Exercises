#include<stdio.h>

int main()
{
	int number_1, number_2, m, n, mcd, tmp;
	
	do
	{
		printf("Enter 2 numbers: ");
		scanf("%d %d", &number_1, &number_2);
	}while(number_1 <= 0 || number_2 <= 0);
	
	if(number_1 > number_2)
	{
		m = number_1;
		n = number_2;
	}
	else
	{
		m = number_2;
		n = number_1;
	}
	
	while(n != 0)
	{
		tmp = n;
		n = m % n;
		m = tmp;
	}
	
	mcd = m;
	
	printf("The GCD is %d", mcd);
	
	return 0;
}
