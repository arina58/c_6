#include "island.h"


void display(island *start){
    island *i = start;
    for (; i != NULL; i = i->next){
        printf("Остров %s открывается с %s до %s", i->name, i->opens, i->closes);
    }
}

island* create(char *name){
    island *i = malloc(sizeof(island));
    i->name = name;
    i->opens = "09:00";
    i->closes = "17:00\n";
    i->next = NULL;
    return i;

}