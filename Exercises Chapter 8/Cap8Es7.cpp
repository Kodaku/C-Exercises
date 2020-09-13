#include<stdio.h>

#define ROWS 5
#define COLS 5

int main()
{
	int matrix[ROWS][COLS];
	int row_sum[ROWS] = {0}, col_sum[COLS] = {0};
	int i, j;
	
	for(i = 0; i < ROWS; i++)
	{
		printf("Enter row %d: ", (i + 1));
		for(j = 0; j < COLS; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			row_sum[i] += matrix[i][j];
			col_sum[j] += matrix[i][j];
		}
	}
	
	printf("Rows sum: \t");
	
	for(i = 0; i < ROWS; i++)
	{
		printf("%d\t", row_sum[i]);
	}
	
	putchar('\n');
	
	printf("Columns sum: \t");
	
	for(j = 0; j < COLS; j++)
	{
		printf("%d\t", col_sum[j]);
	}
	
	return 0;
}
