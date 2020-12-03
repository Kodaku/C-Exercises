#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "bool.h"

#define TOTAL_OPTIONS 8

char *options[] = {"1.Show Team", "2. Show Pokedex", "3. Show Bag", "4. Show Trainer", "5. Search In Team", "6. Search In Pokedex", "7. Search in bag", "8. Exit"};

int main(int argc, char *argv[])
{
    int choose, i;
    char name[100];
    Bool found, continue_interaction = TRUE;
    while (continue_interaction)
    {
        do
        {
            for (i = 0; i < TOTAL_OPTIONS; i++)
            {
                puts(options[i]);
            }
            printf("Choose an option: ");
            scanf("%d", &choose);
            fflush(stdin);
        } while (choose <= 0 || choose > TOTAL_OPTIONS);

        switch (choose)
        {
        case 1:
        {
            show_all_team();
            break;
        }
        case 2:
        {
            show_all_pokedex();
            break;
        }
        case 3:
        {
            show_all_bag();
            break;
        }
        case 4:
        {
            show_all_trainer();
            break;
        }
        case 5:
        {
            printf("Enter the name of a team member: ");
            gets(name);
            if (search_in_team(name) == TRUE)
            {
                printf("Team member successfully found!!\n");
            }
            else
            {
                printf("There is no team member with this name\n");
            }
            break;
        }
        case 6:
        {
            printf("Enter the name of a pokemon: ");
            gets(name);
            if (search_in_pokedex(name) == TRUE)
            {
                printf("Pokemon successfully found!!\n");
            }
            else
            {
                printf("There is no Pokemon with this name\n");
            }
            break;
        }
        case 7:
        {
            printf("Enter the name of an item: ");
            gets(name);
            if (search_in_bag(name) == TRUE)
            {
                printf("Item successfully found!!\n");
            }
            else
            {
                printf("There is no item with this name\n");
            }
            break;
        }
        case 8:
        {
            continue_interaction = FALSE;
            break;
        }
        }
    }
    printf("Thank for using this program, hope to see you later :)\n");

    exit(EXIT_SUCCESS);
}