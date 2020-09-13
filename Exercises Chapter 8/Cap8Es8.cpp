#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TRUE 1
#define FALSE 0

#define ROWS 10
#define COLS 10

#define NUM_DIRECTIONS 4
#define TRIES 10

int main()
{
	typedef int Bool;
	char matrix[ROWS][COLS];
	char ch;
	int i = 0, j = 0, direction, tries = 0;
	Bool valid = FALSE;
	
	srand((unsigned) time(NULL));
	
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			matrix[i][j] = '.';
		}
	}
	
	i = j = 0;
	
	for(ch = 'A'; ch <= 'Z'; ch++)
	{
		tries = 0;
		valid = FALSE;
		while(tries < TRIES && !valid)
		{
			direction = rand() % NUM_DIRECTIONS;
			switch(direction)
			{
			case 0:
				i++;
				if(i >= ROWS || matrix[i][j] != '.')
				{
					i--;
					tries++;
				}
				else
				{
					valid = TRUE;
				}
				break;
			case 1:
				i--;
				if(i < 0 || matrix[i][j] != '.')
				{
					i++;
					tries++;
				}
				else
				{
					valid = TRUE;
				}
				break;
			case 2:
				j++;
				if(j >= COLS || matrix[i][j] != '.')
				{
					j--;
					tries++;
				}
				else
				{
					valid = TRUE;
				}
				break;
			case 3:
				j--;
				if(j < 0 || matrix[i][j] != '.')
				{
					j++;
					tries++;
				}
				else
				{
					valid = TRUE;
				}
				break;
			}	
		}
		if(tries == TRIES)
		{
			break;
		}
		else
		{
			matrix[i][j] = ch;
		}
	}
	
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			putchar(matrix[i][j]);
		}
		putchar('\n');
	}
}
