#include<stdio.h>

#define WORDS 50
#define LETTERS 100
#define TRUE 1
#define FALSE 0

int main()
{
	typedef int Bool;
	char sentence[WORDS][LETTERS];
	char ch, end_char;
	int i, j;
	Bool end = FALSE;
	
	printf("Enter a sentence: ");
	
	for(i = 0; i < WORDS && !end; i++)
	{
		for(j = 0; j < LETTERS && (ch = getchar()) != ' '; j++)
		{
			if(ch == '!' || ch == '?' || ch == '.')
			{
				end_char = ch;
				end = TRUE;
				break;
			}
			else if(ch == '\n')
			{
				end = TRUE;
				break;
			}
			else
			{
				sentence[i][j] = ch;
			}
		}
		sentence[i][j] = '\0';
	}
	
	printf("Reversed sentence: ");
	
	for(i--; i >= 0; i--)
	{
		for(j = 0; sentence[i][j]; j++)
		{
			putchar(sentence[i][j]);
		}
		putchar(' ');
	}
	putchar(end_char);
	
	return 0;
	
}
