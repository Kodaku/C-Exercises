#include <stdio.h>
#include <stdlib.h>

#define DIM 100
#define TRUE 1
#define FALSE 0

typedef int Bool;

char next_letter(char **sentence, Bool from_begin);

int main(void)
{
    char sentence[DIM];
    char ch;
    char *from_start, *from_end;
    int i, length = 0;
    Bool is_palindrome = TRUE;

    printf("Enter a sentence: ");

    for (i = 0; i < DIM && (ch = getchar()) != '\n'; i++)
    {
        sentence[i] = ch;
        length++;
    }

    for (from_start = sentence, from_end = &sentence[length - 1]; from_start <= from_end; from_start++, from_end--)
    {
        char letter_i = next_letter(&from_start, TRUE);
        char letter_j = next_letter(&from_end, FALSE);

        if (letter_i != letter_j)
        {
            is_palindrome = FALSE;
            break;
        }
    }

    if (is_palindrome)
    {
        printf("The sentence is palindrome!\n");
    }
    else
    {
        printf("The sentence is not palindrome...\n");
    }

    exit(0);
}

char next_letter(char **sentence, Bool from_begin)
{
    char letter = tolower(*(*sentence));

    while (letter < 'a' || letter > 'z')
    {
        if (from_begin)
            (*sentence)++;
        else
            (*sentence)--;
        letter = tolower(*(*sentence));
    }

    return letter;
}