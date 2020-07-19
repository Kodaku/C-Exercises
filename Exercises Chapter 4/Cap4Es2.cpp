#include<stdio.h>
#define BASE 8

int main()
{
	//Declaration
	int number, first_digit, second_digit, third_digit, fourth_digit, fifth_digit;
	
	//Input
	printf("Enter a 5 digit number: ");
	scanf("%d", &number);
	
	//Logic
	fifth_digit = number % BASE;
	number /= BASE;
	
	fourth_digit = number % BASE;
	number /= BASE;
	
	third_digit = number % BASE;
	number /= BASE;
	
	second_digit = number % BASE;
	number /= BASE;
	
	first_digit = number % BASE;
	number /= BASE;
	
	//Output
	printf("The number in base 8 is: %d %d%d%d%d", first_digit, second_digit, third_digit, fourth_digit, fifth_digit);
	
	return 0;
}
