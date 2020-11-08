#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int argv_sum(int length, char *argv[]);

int main(int argc, char *argv[])
{
    int sum;

    sum = argv_sum(argc, argv);

    printf("The sum of argv is: %d\n", sum);

    exit(0);
}

int argv_sum(int length, char *argv[])
{
    int sum = 0, i;
    for (i = 0; i < length; i++)
    {
        sum += atoi(argv[i]);
    }

    return sum;
}