#include<stdio.h>

int main()
{
	int number, dozens, units;
	
	printf("Enter a two digits number: ");
	scanf("%d", &number);
	
	dozens = number / 10;
	units = number % 10;
	
	if(number >= 10 && number <= 19)
	{
		switch(number)
		{
			case 10:
				printf("ten");
				break;
			case 11:
				printf("Eleven\n");
				break;
			case 12:
				printf("Twelve\n");
				break;
			case 13:
				printf("Thirteen\n");
				break;
			case 14:
				printf("Fourteen\n");
				break;
			case 15:
				printf("Fifteen\n");
				break;
			case 16:
				printf("Sixteen\n");
				break;
			case 17:
				printf("Seventeen\n");
				break;
			case 18:
				printf("Eighteen\n");
				break;
			case 19:
				printf("Nineteen");
				break;
		}
	}
	else if(number >= 1 && number <= 9 || number>= 20 && number <= 99)
	{
		switch(dozens)
		{
			case 2:
				printf("Twenty");
				break;
			case 3:
				printf("Thirty");
				break;
			case 4:
				printf("Fourty");
				break;
			case 5:
				printf("Fifty");
				break;
			case 6:
				printf("Sixty");
				break;
			case 7:
				printf("Seventy");
				break;
			case 8:
				printf("Eighty");
				break;
			case 9:
				printf("Ninety");
				break;
		}
		
		switch(units)
		{
			case 1:
				printf("One\n");
				break;
			case 2:
				printf("Two\n");
				break;
			case 3:
				printf("Three\n");
				break;
			case 4:
				printf("Four\n");
				break;
			case 5:
				printf("Five\n");
				break;
			case 6:
				printf("Six\n");
				break;
			case 7:
				printf("Seven\n");
				break;
			case 8:
				printf("Eight\n");
				break;
			case 9:
				printf("Nine\n");
				break;
			default:
				printf("\n");
		}
	}
	else if(number == 0)
	{
		printf("Zero\n");
	}
	else
	{
		printf("The number must have 2 or 1 digits\n");
	}
	
	return 0;
}
