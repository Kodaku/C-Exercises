#include<stdio.h>
#include<stdlib.h>

#define DIM 10

void selection_sort(int a[], int length);

int main(void)
{
	int array[DIM];
	int i;
	
	printf("Enter an array of %d numbers: ", DIM);
	
	for(i = 0; i < DIM; i++)
	{
		scanf("%d", &array[i]);
	}
	
	selection_sort(array, DIM);
	
	printf("Sorted Array: ");
	
	for(i = 0; i < DIM; i++)
	{
		printf("%d\t", array[i]);
	}
	
	exit(0);
}

void selection_sort(int a[], int length)
{
	int i, j, tmp;
	
	for(i = 0; i < length; i++)
	{
		for(j = i + 1; j < length; j++)
		{
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
