#include<stdio.h>

#define HOUR_12 12
#define MINUTES_PER_HOUR 60
#define HOUR_PER_DAY 24
#define TRUE 1
#define FALSE 0

int main()
{
	int hour_24, minutes, hour_12, times;
	int valid;
	
	printf("Enter an hour using 24-hour format: ");
	scanf("%d:%d", &hour_24, &minutes);
	
	if(minutes > MINUTES_PER_HOUR)
	{
		times = minutes / MINUTES_PER_HOUR;
		minutes %= MINUTES_PER_HOUR;
		hour_24 += times;
	}
	
	if(hour_24 > HOUR_PER_DAY)
	{
		valid = FALSE;
	}
	else
	{
		valid = TRUE;
		if(hour_24 == HOUR_12)
		{
			hour_12 = HOUR_12;
		}
		else
		{
			hour_12 = hour_24 % HOUR_12;
		}
	}
	
	if(valid)
	{
		printf("The hour in 12-hour format is: %.2d:%.2d", hour_12, minutes);
	}
	else
	{
		printf("Invalid hour");
	}
}
