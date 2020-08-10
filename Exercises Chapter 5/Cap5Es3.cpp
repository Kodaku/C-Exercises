#include<stdio.h>

int main()
{
	int number_1, number_2, number_3, number_4;
	int max, min;
	
	printf("Enter 4 numbers: ");
	scanf("%d %d %d %d", &number_1, &number_2, &number_3, &number_4);
	
	if(number_1 > number_2 && number_1 > number_3 && number_1 > number_4)
	{
		max = number_1;
	}
	else if(number_2 > number_1 && number_2 > number_3 && number_2 > number_4)
	{
		max = number_2;
	}
	else if(number_3 > number_1 && number_3 > number_2 && number_3 > number_4)
	{
		max = number_3;
	}
	else
	{
		max = number_4;
	}
	
	if(number_1 < number_2 && number_1 < number_3 && number_1 < number_4)
	{
		min = number_1;
	}
	else if(number_2 < number_1 && number_2 < number_3 && number_2 < number_4)
	{
		min = number_2;
	}
	else if(number_3 < number_1 && number_3 < number_2 && number_3 < number_4)
	{
		min = number_3;
	}
	else
	{
		min = number_4;
	}
	
	printf("The max is: %d\n", max);
	printf("The min is: %d\n", min);
	
	return 0;
}
