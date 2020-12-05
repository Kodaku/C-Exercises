#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "deposit.h"
#include "utils.h"

void deposit_animal(Animal animals[], int length)
{
    int i;
    Animal animal;
    for (i = 0; i < length; i++)
    {
        if (animals[i].id == -1)
        {
            printf("Enter the animal name: ");
            gets(animal.name);
            fflush(stdin);
            printf("Enter the animal species: ");
            gets(animal.species);
            fflush(stdin);
            printf("Enter the animal owner: ");
            gets(animal.owner);
            fflush(stdin);
            printf("Enter the animal permanence days: ");
            scanf("%d", &animal.permanence_days);
            fflush(stdin);
            animal.id = i;
            animals[i] = animal;
            break;
        }
    }
}