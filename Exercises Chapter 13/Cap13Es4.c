#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int days_leap_year[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days_not_leap_year[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Bool check_date(int month, int day, int year);
Bool check_day(int month, int day, int year);
char *month_to_string(int month);

int main(int argc, char *argv[])
{
    int month, day, year;
    char *string_month;

    do
    {
        printf("Enter a date:(mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        printf("%d %d %d\n", month, day, year);
    } while (!check_date(month, day, year));

    string_month = month_to_string(month);

    printf("The date is: %s, %d %d\n", string_month, day, year);

    exit(0);
}

Bool check_date(int month, int day, int year)
{
    Bool valid = TRUE;
    if (month <= 0 || month >= 12)
    {
        valid = FALSE;
    }
    else if (year < 0)
    {
        valid = FALSE;
    }
    else if (!check_day(month, day, year))
    {
        valid = FALSE;
    }
    return valid;
}

Bool check_day(int month, int day, int year)
{
    Bool valid = TRUE;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            if (day <= 0 || day > days_leap_year[month - 1])
            {
                valid = FALSE;
            }
        }
        else
        {
            if (day <= 0 || day > days_not_leap_year[month - 1])
            {
                valid = FALSE;
            }
        }
    }
    else if (year % 4 == 0)
    {
        if (day <= 0 || day > days_leap_year[month - 1])
        {
            valid = FALSE;
        }
    }
    else
    {
        if (day <= 0 || day > days_not_leap_year[month - 1])
        {
            valid = FALSE;
        }
    }
    return valid;
}

char *month_to_string(int month)
{
    return months[month - 1];
}
