#include <stdio.h>
#include "konversi.h"

int main()
{
    int desimal;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &desimal);

    KonversiDesimalKeBiner(desimal);

    return 0;
}
