#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define TOTAL_WORDS 20
#define MAX_LENGTH 50

typedef int Bool;

void sort_words(char *words[], int length);

int main(int argc, char *argv[])
{
    char matrix[TOTAL_WORDS][MAX_LENGTH];
    char *words[TOTAL_WORDS];
    int i, words_count = 0;
    Bool end = FALSE;

    for (i = 0; i < TOTAL_WORDS && !end; i++)
    {
        words[i] = matrix[i];
        printf("Enter a word: ");
        gets(words[i]);
        if (strlen(words[i]) == 4)
        {
            end = TRUE;
        }
        words_count++;
    }

    sort_words(words, words_count);

    printf("Sorted words:\n");

    for (i = 0; i < words_count; i++)
    {
        puts(words[i]);
    }

    exit(0);
}

void sort_words(char *words[], int length)
{
    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            char tmp[MAX_LENGTH];
            if (strcmp(words[i], words[j]) > 0)
            {
                strcpy(tmp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], tmp);
            }
        }
    }
}