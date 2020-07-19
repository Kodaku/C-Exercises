#include<stdio.h>
#define DIECI 10
#define CENTO 100
int main()
{
	//Declarations
	int number, first_digit, second_digit, third_digit, reversed_number;
	
	//Input
	printf("Enter a 3 digit number: ");
	scanf("%d", &number);
	
	//Logic
	first_digit = number % DIECI;
	number /= DIECI;
	second_digit = number % DIECI;
	number /= DIECI;
	third_digit = number % DIECI;
	number /= DIECI;
	reversed_number = first_digit * CENTO + second_digit * DIECI + third_digit;
	
	//Visualization
	printf("The revered number is: %d", reversed_number);
	
	return 0;
}
