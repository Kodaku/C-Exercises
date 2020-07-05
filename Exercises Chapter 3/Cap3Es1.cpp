#include<stdio.h>

int main()
{
	int gs_1, language, publisher_code, item_number, check;
	
	printf("The ISBN format is: xxx-x-xxx-xxxxx-x\n");
	printf("Enter an ISBN code: ");
	scanf("%d-%d-%d-%d-%d", &gs_1, &language, &publisher_code, &item_number, &check);
	
	printf("The gs_1 code is: %d\n", gs_1);
	printf("The language is: %d\n", language);
	printf("The publisher code is: %d\n", publisher_code);
	printf("The item number is: %d\n", item_number);
	printf("The check digit is: %d\n", check);
	
	return 0;
}
