#include<stdio.h>

#define HOUR_PER_DAY 24
#define MINUTES_PER_HOUR 60
#define TRUE 1
#define FALSE 0

int main()
{
	int hour, minutes, departure_minutes, departure_hour, arrival_minutes, arrival_hour;
	int user_time;
	int valid;
	
	printf("Enter a departure time: ");
	scanf("%d:%d", &hour, &minutes);
	
	if(hour > HOUR_PER_DAY)
	{
		valid = FALSE;
	}
	else
	{
		valid = TRUE;
		user_time = hour * MINUTES_PER_HOUR + minutes;
		if(user_time <= 480)
		{
			departure_hour = 8;
			departure_minutes = 0;
			arrival_hour = 10;
			arrival_minutes = 16;
		}
		else if(user_time <= 583)
		{
			departure_hour = 9;
			departure_minutes = 43;
			arrival_hour = 11;
			arrival_minutes = 52;
		}
		else if(user_time <= 679)
		{
			departure_hour = 11;
			departure_minutes = 19;
			arrival_hour = 13;
			arrival_minutes = 31;
		}
		else if(user_time <= 767)
		{
			departure_hour = 12;
			departure_minutes = 47;
			arrival_hour = 15;
			arrival_minutes = 0;
		}
		else if(user_time <= 840)
		{
			departure_hour = 14;
			departure_minutes = 0;
			arrival_hour = 16;
			arrival_minutes = 8;
		}
		else if(user_time <= 945)
		{
			departure_hour = 15;
			departure_minutes = 45;
			arrival_hour = 17;
			arrival_minutes = 55;
		}
		else if(user_time <= 1140)
		{
			departure_hour = 19;
			departure_minutes = 0;
			arrival_hour = 21;
			arrival_minutes = 20;
		}
		else if(user_time <= 1305)
		{
			departure_hour = 21;
			departure_minutes = 45;
			arrival_hour = 23;
			arrival_minutes = 58;
		}
	}
	
	if(valid)
	{
		printf("Departure Time: %.2d:%.2d\n", departure_hour, departure_minutes);
		printf("Arrival Time: %.2d:%.2d\n", arrival_hour, arrival_minutes);
	}
	else
	{
		printf("Invalid time\n");
	}
	
	return 0;
}
