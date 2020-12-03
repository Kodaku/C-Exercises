#include <stdio.h>
#include <string.h>
#include "pokedex.h"
#include "bool.h"

const char *pokemon[] = {"Charmander", "Squirtle", "Mew", "Mewtwo", "Articuno", "Zapdos", "Moltres", "Latias", "Ho-oh", "Reshiram"};

void show_pokedex(void)
{
    int i;
    for (i = 0; i < POKEDEX_LENGTH; i++)
    {
        printf("%d. %s\n", (i + 1), pokemon[i]);
    }
}

Bool search_pokemon(char *pokemon_name)
{
    int i;
    Bool found = FALSE;
    for (i = 0; i < POKEDEX_LENGTH; i++)
    {
        if (strcmp(pokemon_name, pokemon[i]) == 0)
        {
            found = TRUE;
        }
    }

    return found;
}