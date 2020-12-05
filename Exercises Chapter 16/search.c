#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "utils.h"
#include "search.h"

void search_by_name(Animal animals[], int length, char *animal_name)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (strcmp(animal_name, animals[i].name) == 0)
        {
            print_animal(animals[i]);
        }
    }
}

void search_by_species(Animal animals[], int length, char *animal_species)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (strcmp(animal_species, animals[i].species) == 0)
        {
            print_animal(animals[i]);
        }
    }
}

void search_by_owner(Animal animals[], int length, char *animal_owner)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (strcmp(animal_owner, animals[i].owner) == 0)
        {
            print_animal(animals[i]);
        }
    }
}

void search_by_id(Animal animals[], int length, int id)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (id == animals[i].id)
        {
            print_animal(animals[i]);
        }
    }
}