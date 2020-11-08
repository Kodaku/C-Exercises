#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_argv(char *argv[], int length);

int main(int argc, char *argv[])
{
    int i;

    reverse_argv(argv, argc - 1);

    for (i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }
}

void reverse_argv(char *argv[], int length)
{
    int i, j;
    char tmp[50];
    for (i = 0, j = length; j >= i; i++, j--)
    {
        strcpy(tmp, argv[i]);
        strcpy(argv[i], argv[j]);
        strcpy(argv[j], tmp);
    }
}