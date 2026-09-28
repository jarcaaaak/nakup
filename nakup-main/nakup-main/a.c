#include <stdio.h>
type struct Produkt {
    char nazov[50];
    int cena;
    int pocet;
} Product;

int main(void) {
    Product produkty[10];


    for (int i = 0; i < 10; i++) {
       

    printf("Zadaj nazov 1. produktu: ");
    scanf("%s", produkty[0].nazov);
    printf("Zadaj cenu: ");
    scanf("%d", &produkty[0].cena);
    printf("Zadaj pocet kusov: ");
    scanf("%d", &produkty[0].pocet);

    printf("\nZadaj nazov 2. produktu: ");
    scanf("%s", produkty[1].nazov);
    printf("Zadaj cenu: ");
    scanf("%d", &produkty[1].cena);
    printf("Zadaj pocet kusov: ");
    scanf("%d", &produkty[1].pocet);

    printf("\nZadaj nazov 3. produktu: ");
    scanf("%s", produkty[2].nazov);
    printf("Zadaj cenu: ");
    scanf("%d", &produkty[2].cena);
    printf("Zadaj pocet kusov: ")   ;
    scanf("%d", &produkty[2].pocet);

    float spolu = produkty[0].cena * produkty[0].pocet + produkty[1].cena * produkty[1].pocet + produkty[2].cena * produkty[2].pocet;

    printf("\n nakup \n");
    printf("%s - %.2f $ x %d = %.2f $\n", produkty[0].nazov, produkty[0].cena, produkty[0].pocet, produkty[0].cena * produkty[0].pocet);
    printf("%s - %.2f $ x %d = %.2f $\n", produkty[1].nazov, produkty[1].cena, produkty[1].pocet, produkty[1].cena * produkty[1].pocet);
    printf("%s - %.2f $ x %d = %.2f $\n", produkty[2].nazov, produkty[2].cena, produkty[2].pocet, produkty[2].cena * produkty[2].pocet);
    printf("\n spolu: %.2f $\n", spolu);
    return 0;
}