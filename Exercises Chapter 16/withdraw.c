#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "utils.h"
#include "withdraw.h"

const Animal sample = {"shfkshfkshfkjs", "Tirannosaurus Rex", "dfsdfsdlkfjds", 999, -1};

void withdraw_animal(Animal animals[], int length, int id)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (id == animals[i].id)
        {
            animals[i] = sample;
            printf("Animal withdrawed successfully!\n");
            return;
        }
    }
    printf("This ID doesn't exists");
}