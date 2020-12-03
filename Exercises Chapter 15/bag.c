#include <stdio.h>
#include <string.h>
#include "bool.h"
#include "bag.h"

const char *bag[] = {"Potion", "Super Potion", "Revive", "Max Revive", "Antidote", "Poke Ball", "Master Ball"};

void show_bag(void)
{
    int i;
    for (i = 0; i < BAG_LENGTH; i++)
    {
        printf("%d. %s\n", (i + 1), bag[i]);
    }
}

Bool search_item(char *pokemon_name)
{
    int i;
    Bool found = FALSE;
    for (i = 0; i < BAG_LENGTH; i++)
    {
        if (strcmp(pokemon_name, bag[i]) == 0)
        {
            found = TRUE;
        }
    }

    return found;
}