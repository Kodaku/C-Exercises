#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "deposit.h"
#include "search.h"
#include "withdraw.h"
#include "utils.h"

#define DIM 100

void manage_choose(Animal animals[], AppState state);
void exit_app();

int main(int argc, char *argv[])
{
    AppState state;
    Bool continue_use = TRUE;
    Animal animals[DIM];

    initialize_animals(animals, DIM);

    while (continue_use)
    {
        printf("Choose an option: \n");
        printf("1. Deposit an Animal;\n");
        printf("2. Search an Animal by name;\n");
        printf("3. Search an Animal by species;\n");
        printf("4. Search an Animal by owner;\n");
        printf("5. Search an Animal by id;\n");
        printf("6. Withdraw an Animal;\n");
        printf("7. Exit\n");
        scanf("%d", &state);
        fflush(stdin);
        manage_choose(animals, state);
    }

    exit(EXIT_SUCCESS);
}

void manage_choose(Animal animals[], AppState state)
{
    switch (state)
    {
    case DEPOSIT:
    {
        deposit_animal(animals, DIM);
        break;
    }
    case SEARCH_BY_NAME:
    {
        char name[50];
        printf("Enter the animal name you want to search: ");
        gets(name);
        fflush(stdin);
        search_by_name(animals, DIM, name);
        break;
    }
    case SEARCH_BY_SPECIES:
    {
        char species[50];
        printf("Enter the animal species you want to search: ");
        gets(species);
        fflush(stdin);
        search_by_species(animals, DIM, species);
        break;
    }
    case SEARCH_BY_OWNER:
    {
        char owner_name[50];
        printf("Enter the animal owner you want to search: ");
        gets(owner_name);
        fflush(stdin);
        search_by_owner(animals, DIM, owner_name);
        break;
    }
    case SEARCH_BY_ID:
    {
        int id;
        printf("Enter the animal id you want to search: ");
        scanf("%d", &id);
        fflush(stdin);
        search_by_id(animals, DIM, id);
        break;
    }
    case WITHDRAW:
    {
        int id;
        printf("Enter the animal id you want to withdraw: ");
        scanf("%d", &id);
        fflush(stdin);
        withdraw_animal(animals, DIM, id);
        break;
    }
    case EXIT:
    {
        exit_app();
        break;
    }
    }
}

void exit_app()
{
    printf("Thank for using this biutiful applicheshion\n");
    printf("BYE!!");
    exit(EXIT_SUCCESS);
}