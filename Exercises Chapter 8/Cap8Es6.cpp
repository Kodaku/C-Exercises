#include<stdio.h>
#include<ctype.h>

#define DIM 100

int main()
{
	char sentence[DIM];
	char ch, tmp_char;
	int i;
	
	printf("Enter a sentence: ");
	
	for(i = 0; i < DIM - 1 && (ch = getchar()) != '\n'; i++)
	{
		sentence[i] = toupper(ch);
	}
	
	sentence[i] = '\0';
	
	for(i = 0; sentence[i]; i++)
	{
		tmp_char = sentence[i];
		switch(tmp_char)
		{
			case 'A':
				tmp_char = '4';
				break;
			case 'B':
				tmp_char = '8';
				break;
			case 'I':
				tmp_char = '1';
				break;
			case 'E':
				tmp_char = '3';
				break;
			case 'S':
				tmp_char = '5';
				break;
			case 'O':
				tmp_char = '0';
				break;
		}
		
		putchar(tmp_char);
	}
	
	putchar('\n');
	
	return 0;
}
