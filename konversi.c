#include "konversi.h"
#include <stdio.h>

void KonversiDesimalKeBiner(int desimal) {
    address stack = NULL;
    
    while (desimal > 0) {
        Push(&stack, desimal % 2);
        desimal /= 2;
    }

    printf("Hasil konversi ke biner: ");
    while (!Is_Empty(stack)) {
        printf("%d", Pop(&stack));
    }
    printf("\n");
}
