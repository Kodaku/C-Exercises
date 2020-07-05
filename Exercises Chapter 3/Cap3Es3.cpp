#include<stdio.h>

int main()
{
	int number_1, number_2, number_3, number_4,
		number_5, number_6, number_7, number_8,
		number_9, number_10, number_11, number_12,
		number_13, number_14, number_15, number_16;
	int row1Sum, row2Sum, row3Sum, row4Sum;
	int col1Sum, col2Sum, col3Sum, col4Sum;
	int diagonal1Sum, diagonal2Sum;
	
	printf("Enter 16 numbers between 1 and 16: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &number_1, &number_2, &number_3, &number_4,
											&number_5, &number_6, &number_7, &number_8,
											&number_9, &number_10, &number_11, &number_12,
											&number_13, &number_14, &number_15, &number_16);
	
	row1Sum = number_1 + number_2 + number_3 + number_4;
	row2Sum = number_5 + number_6 + number_7 + number_8;
	row3Sum = number_9 + number_10 + number_11 + number_12;
	row4Sum = number_13 + number_14 + number_15 + number_16;
	
	col1Sum = number_1 + number_5 + number_9 + number_13;
	col2Sum = number_2 + number_6 + number_10 + number_14;
	col3Sum = number_3 + number_7 + number_11 + number_15;
	col4Sum = number_4 + number_8 + number_12 + number_16;
	
	diagonal1Sum = number_1 + number_6 + number_11 + number_16;
	diagonal2Sum = number_4 + number_7 + number_10 + number_13;
	
	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", number_1, number_2, number_3, number_4,
																		number_5, number_6, number_7, number_8,
																		number_9, number_10, number_11, number_12,
																		number_13, number_14, number_15, number_16);
	printf("Rows' sums: %d %d %d %d\n", row1Sum, row2Sum, row3Sum, row4Sum);
	printf("Cols' sums: %d %d %d %d\n", col1Sum, col2Sum, col3Sum, col4Sum);
	printf("Diagonals' sums: %d %d\n", diagonal1Sum, diagonal2Sum);
	
	return 0;
}
