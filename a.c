#include <stdio.h>
int main() {
    char nazov1[50], nazov2[50], nazov3[50];
    float cena1, cena2, cena3;
    int pocet1, pocet2, pocet3;

    printf("Zadaj nazov 1. produktu: ");
    scanf("%s", nazov1);
    printf("Zadaj cenu: ");
    scanf("%f", &cena1);
    printf("Zadaj pocet kusov: ");
    scanf("%d", &pocet1);

    printf("\nZadaj nazov 2. produktu: ");
    scanf("%s", nazov2);
    printf("Zadaj cenu: ");
    scanf("%f", &cena2);
    printf("Zadaj pocet kusov: ");
    scanf("%d", &pocet2);

    printf("\nZadaj nazov 3. produktu: ");
    scanf("%s", nazov3);
    printf("Zadaj cenu: ");
    scanf("%f", &cena3);
    printf("Zadaj pocet kusov: ");
    scanf("%d", &pocet3);

    float spolu = cena1 * pocet1 + cena2 * pocet2 + cena3 * pocet3;

    printf("\n nakup \n");
    printf("%s - %.2f $ x %d = %.2f $\n", nazov1, cena1, pocet1, cena1 * pocet1);
    printf("%s - %.2f $ x %d = %.2f $\n", nazov2, cena2, pocet2, cena2 * pocet2);
    printf("%s - %.2f $ x %d = %.2f $\n", nazov3, cena3, pocet3, cena3 * pocet3);
    printf("\n spolu: %.2f $\n", spolu);
    return 0;
}