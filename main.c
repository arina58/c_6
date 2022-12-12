#include <stdio.h>
#include <stdlib.h>
#include "island.h"

int main(){
    island *amity = create("Дружбы");
    island *craggy = create("Скалистый");
    island *isla_nublar = create("Туманный");
    island *shutter = create("Проклятых");

    amity->next = craggy;
    craggy->next = isla_nublar;
    isla_nublar->next = shutter;

    display(amity);

    free(amity);
    free(craggy);
    free(isla_nublar);
    free(shutter);

    return 0;
}