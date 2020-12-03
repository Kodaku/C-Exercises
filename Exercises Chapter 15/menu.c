#include "menu.h"
#include "pokedex.h"
#include "bag.h"
#include "card.h"
#include "team.h"
#include "bool.h"

void show_all_team(void){
    show_team();
}
void show_all_pokedex(void){
    show_pokedex();
}
void show_all_bag(void){
    show_bag();
}
void show_all_trainer(void){
    show_card();
}

Bool search_in_team(char *pokemon_name){
    return search_member(pokemon_name);
}

Bool search_in_pokedex(char *pokemon_name){
    return search_pokemon(pokemon_name);
}

Bool search_in_bag(char *item_name){
    search_item(item_name);
}