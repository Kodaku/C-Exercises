#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	int digit, start;
	
	printf("Enter a phone number with upper case letters: ");
	while((ch = getchar()) != '\n')
	{
		ch = toupper(ch);
		if(ch >= 'A' && ch <= 'Z')
		{
			start = ch - 'A';
			digit = start / 3 + 2;
			if(ch == 'Z' || ch == 'Y')
			{
				digit = 9;
			}
			else if(ch == 'S')
			{
				digit = 7;
			}
			printf("%d", digit);
		}
		else
		{
			putchar(ch);	
		}
	}
	
	return 0;
}
