#include<stdio.h>

int main()
{
	int first_part, second_part, third_part;
	
	printf("This is the phone number form: (xxx) xxx-xxxx\n");
	printf("Enter a phone number: ");
	scanf("(%d) %d-%d", &first_part, &second_part, &third_part);
	
	printf("%d.%d.%d\n", first_part, second_part, third_part);
	
	return 0;
}
