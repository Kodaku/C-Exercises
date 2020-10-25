#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int enter_sentence(char *sentence, int max_length);
void print_reversed(char *sentence);

int main(void)
{
    char sentence[DIM];
    char *char_ptr;
    int i, length = 0;

    printf("Enter a sentence: ");

    length = enter_sentence(sentence, DIM);

    printf("Reversed sentence: ");

    print_reversed(&sentence[length - 1]);

    exit(0);
}

int enter_sentence(char *sentence, int max_length)
{
    int i, length = 1;
    char ch;
    for (i = 1; i < DIM && (ch = getchar()) != '\n'; i++)
    {
        sentence[i] = ch;
        length++;
    }

    sentence[0] = '\0';

    return length;
}

void print_reversed(char *sentence)
{
    for (; *sentence; sentence--)
    {
        putchar(*sentence);
    }
}