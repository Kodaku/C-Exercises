#include<stdio.h>
#include<stdlib.h>

#define TOTAL_NUMBERS 10
#define ROWS 3
#define COLS 3
#define SEGMENT_NUMBER 7

const int segments_array[TOTAL_NUMBERS][SEGMENT_NUMBER] = {{1,1,0,1,1,1,1},
														  {0,0,0,1,0,0,1},
														  {1,0,1,1,1,1,0},
														  {1,0,1,1,0,1,1},
														  {0,1,1,1,0,0,1},
														  {1,1,1,0,0,1,1},
														  {1,1,1,0,1,1,1},
														  {1,0,0,1,0,0,1},
														  {1,1,1,1,1,1,1},
														  {1,1,1,1,0,1,1}};

int main(void)
{
	char matrix[TOTAL_NUMBERS][ROWS][COLS];
	int i, j, k, index, digit;
	int numbers[TOTAL_NUMBERS];
	
	for(k = 0; k < TOTAL_NUMBERS; k++)
	{
		do
		{
			printf("Enter the %d number: ", k);
			scanf("%d", &numbers[k]);
		}while(numbers[k] >= 10);
	}
	
	for(k = 0; k < TOTAL_NUMBERS; k++)
	{
		digit = numbers[k];
		for(i = 0; i < ROWS; i++)
		{
			index = i * 3 - 2;
			for(j = 0; j < COLS; j++)
			{
				if(i == 0)
				{
					matrix[k][i][j++] = ' ';
					if(segments_array[digit][0] == 1)
						matrix[k][i][j++] = '_';
					else
						matrix[k][i][j++] = ' ';
					matrix[k][i][j++] = ' ';
				}
				else
				{
					if(segments_array[digit][index] == 1)
					{
						switch(index)
						{
							case 1: case 3: case 4: case 6:
								matrix[k][i][j] = '|';
								break;
							case 2: case 5:
								matrix[k][i][j] = '_';
								break;
						}
					}
					else
					{
						matrix[k][i][j] = ' ';
					}
					index++;
				}
			}
		}
	}
	
	for(k = 0; k < TOTAL_NUMBERS; k++)
	{
		for(i = 0; i < ROWS; i++)
		{
			for(j = 0; j < COLS; j++)
			{
				putchar(matrix[k][i][j]);
			}
			putchar('\n');
		}
	}
	
	exit(EXIT_SUCCESS);
}
