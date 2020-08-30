#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch, ch_name, ch_surname;
	int counter = 0;
	
	printf("Enter your name and surname: ");
	while((ch = getchar()) != ' ')
	{
		if(counter == 0)
		{
			ch_name = toupper(ch);
		}
		counter++;
	}
	
	counter = 0;
	while((ch_surname = getchar()) != '\n')
	{
		if(counter == 0)
		{
			ch_surname = toupper(ch_surname);
		}
		counter++;
		putchar(ch_surname);
	}
	
	putchar(',');
	putchar(' ');
	putchar(ch_name);
	putchar('.');
	
	return 0;
}
