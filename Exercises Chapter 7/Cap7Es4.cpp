#include<stdio.h>

int main()
{
	char ch;
	int len, word_count, total_len;
	float average_length;
	
	len = word_count = total_len = 0;
	
	printf("Enter a sentence: ");
	
	while((ch = getchar()) != '\n')
	{
		if(ch != ' ')
		{
			len++;
		}
		else
		{
			total_len += len;
			len = 0;
			word_count++;
		}
	}
	
	average_length = (float)total_len / word_count;
	
	printf("The average word length is: %f\n", average_length);
	
	return 0;
}
