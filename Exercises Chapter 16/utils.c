#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "utils.h"

const Animal sample_animal = {"shfkshfkshfkjs", "Tirannosaurus Rex", "dfsdfsdlkfjds", 999, -1};

void print_animal(Animal animal)
{
    printf("ID: %d\n", animal.id);
    printf("Animal name: %s\n", animal.name);
    printf("Animal species: %s\n", animal.species);
    printf("Animal owner: %s\n", animal.owner);
    printf("Permanence days: %d\n", animal.permanence_days);
    printf("--------------------------\n");
}

void initialize_animals(Animal animals[], int lentgth)
{
    int i;
    for (i = 0; i < lentgth; i++)
    {
        animals[i] = sample_animal;
    }
}