#include<stdio.h>

int main()
{
	int window_strength;
	
	printf("Enter the window strenght: ");
	scanf("%d", &window_strength);
	
	if(window_strength < 1)
	{
		printf("Calmo\n");
	}
	else if(window_strength >= 1 && window_strength <= 3)
	{
		printf("Bava di vento\n");
	}
	else if(window_strength > 4 && window_strength <= 27)
	{
		printf("Brezza\n");
	}
	else if(window_strength >= 28 && window_strength <= 47)
	{
		printf("Burrasca\n");
	}
	else if(window_strength >= 48 && window_strength <= 63)
	{
		printf("Tempesta\n");
	}
	else
	{
		printf("Uragano\n");
	}
}
