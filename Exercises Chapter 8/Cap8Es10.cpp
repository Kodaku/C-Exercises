#include<stdio.h>

#define WORDS 50
#define LETTERS 100
#define TRUE 1
#define FALSE 0

int main()
{
	typedef int Bool;
	char sentence[WORDS][LETTERS];
	char ch, tmp_char;
	int i, j, shift_amount, word_length = 0;
	Bool end = FALSE;
	
	printf("Enter a sentence to cipher: ");
	
	for(i = 0; i < WORDS && !end; i++)
	{
		for(j = 0; j < LETTERS && (ch = getchar()) != ' '; j++)
		{
			if(ch == '!' || ch == '?' || ch == '.' || ch == '\n')
			{
				end = TRUE;
				break;
			}
			else
			{
				sentence[i][j] = ch;
			}
		}
		word_length++;
		sentence[i][j] = '\0';
	}
	
	printf("Enter the shift amount: ");
	scanf("%d", &shift_amount);
	
	printf("Cipher text: ");
	for(i = 0; i < word_length; i++)
	{
		for(j = 0; sentence[i][j]; j++)
		{
			tmp_char = sentence[i][j];
			if(tmp_char >= 'A' && tmp_char <= 'Z')
				tmp_char = (tmp_char - 'A' + shift_amount) % 26 + 'A';
			else if(tmp_char >= 'a' && tmp_char <= 'z')
				tmp_char = (tmp_char - 'a' + shift_amount) % 26 + 'a';
			putchar(tmp_char);
		}
		putchar(' ');
	}
	
	return 0;
}
