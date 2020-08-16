#include<stdio.h>

int main()
{
	int number, max;
	
	max = 0;
	
	do
	{
		printf("Enter a number: ");
		scanf("%d", &number);
		
		if(number > max)
		{
			max = number;
		}
	}while(number > 0);
	
	printf("The max is %d\n", max);
	
	return 0;
}
