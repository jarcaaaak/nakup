#include <stdio.h>

typedef struct Produkt {
    char nazov[50];
    int cena;
    int pocet;
} Product;

int main(void) {
    Product produkty[10];

    for (int i = 0; i < 10; i++) {

        printf("Zadaj nazov %d. produktu: ", i + 1);
        scanf("%s", produkty[i].nazov);

        printf("Zadaj cenu: ");
        scanf("%d", &produkty[i].cena);

        printf("Zadaj pocet kusov: ");
        scanf("%d", &produkty[i].pocet);
    }

    float spolu = 0;

    for (int i = 0; i < 10; i++) {
        spolu += produkty[i].cena * produkty[i].pocet;
    }

    printf("\n nakup \n");

    for (int i = 0; i < 10; i++) {
        printf("%s - %d $ x %d = %d $\n",
               produkty[i].nazov,
               produkty[i].cena,
               produkty[i].pocet,
               produkty[i].cena * produkty[i].pocet);
    }

    printf("\n spolu: %.2f $\n", spolu);

    return 0;
}