#include<stdio.h>
#include<math.h>

#define TRUE 1
#define FALSE 0

int main()
{
	typedef int Bool;
	char ch;
	int true_number, reversed_number, start, counter, digit;
	double dec_part;
	Bool is_decimal = FALSE;
	
	counter = 0;
	reversed_number = 0;
	true_number = 0;
	dec_part = 0.0;
	
	printf("Enter a number: ");
	
	while((ch = getchar()) != '\n')
	{
		if(ch >= '0' && ch <= '9')
		{
			start = ch - '0';
			if(!is_decimal)
				reversed_number += start * pow(10, counter++);
			else
				dec_part += (start * pow(10, --counter));
		}
		else
		{
			if(!is_decimal)
			{
				counter--;
				do
				{	
					digit = reversed_number % 10;
					reversed_number /= 10;
					true_number += digit * pow(10, counter--);
				}while(reversed_number != 0);	
			}
			
			if(ch == '.')
			{
				is_decimal = TRUE;
				counter = 0;
			}
		}
	}
	
	printf("The number you've typed in is: %f", true_number + dec_part);
	
	return 0;
}
