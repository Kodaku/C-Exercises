#include <stdio.h>
#include <string.h>
#include "card.h"

const char *trainer_name = "Fukuro";
const char *description = "This is the strongest pokemon trainer in the world";

void show_card(void)
{
    printf("Trainer name: %s\n", trainer_name);
    printf("Trainer Description: %s\n", description);
}