#include <stdio.h>
#include <string.h>
#include "bool.h"
#include "team.h"

const char *team[] = {"Articuno", "Zapdos", "Moltres", "Ho-oh", "Latias", "Reshiram"};

void show_team(void)
{
    int i;
    for (i = 0; i < TEAM_LENGTH; i++)
    {
        printf("%d. %s\n", (i + 1), team[i]);
    }
}

Bool search_member(char *pokemon_name)
{
    int i;
    Bool found = FALSE;
    for (i = 0; i < TEAM_LENGTH; i++)
    {
        if (strcmp(pokemon_name, team[i]) == 0)
        {
            found = TRUE;
        }
    }

    return found;
}