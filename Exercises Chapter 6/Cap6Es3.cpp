#include<stdio.h>

#define TEN 10

int main()
{
	int number, digits;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	do
	{
		number /= TEN;
		digits++;
	}while(number != 0);
	
	printf("The number of digits is: %d", digits);
	
	return 0;
}
