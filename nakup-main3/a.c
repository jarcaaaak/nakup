#include <stdio.h>

typedef struct Produkt {
    char nazov[50];
    int cena;
    int pocet;
} Product;

// vycisti zvysok riadku vo vstupe
void vycistiVstup(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// nacita cele cislo s kontrolou
int nacitajInt(const char *vyzva) {
    int x;
    while (1) {
        printf("%s", vyzva);
        if (scanf("%d", &x) == 1) {
            vycistiVstup();
            return x;
        }
        printf("Neplatny vstup, zadaj cislo!\n");
        vycistiVstup();
    }
}

int main(void) {
    Product produkty[10];
    int pocetPoloziek;

    do {
        pocetPoloziek = nacitajInt("Kolko poloziek chces mat (1-10)? ");

        if (pocetPoloziek < 1 || pocetPoloziek > 10) {
            printf("Zadaj cislo od 1 do 10!\n");
        }
    } while (pocetPoloziek < 1 || pocetPoloziek > 10);

    for (int i = 0; i < pocetPoloziek; i++) {
        printf("\nZadaj nazov %d. produktu: ", i + 1);
        // nacita aj nazov s medzerami
        fgets(produkty[i].nazov, sizeof(produkty[i].nazov), stdin);
        // odstrani znak noveho riadku
        for (int j = 0; produkty[i].nazov[j] != '\0'; j++) {
            if (produkty[i].nazov[j] == '\n') {
                produkty[i].nazov[j] = '\0';
                break;
            }
        }

        produkty[i].cena = nacitajInt("Zadaj cenu: ");
        produkty[i].pocet = nacitajInt("Zadaj pocet kusov: ");
    }

    int spolu = 0;

    for (int i = 0; i < pocetPoloziek; i++) {
        spolu += produkty[i].cena * produkty[i].pocet;
    }

    printf("\n--- NAKUP ---\n");

    for (int i = 0; i < pocetPoloziek; i++) {
        printf("%s - %d $ x %d = %d $\n",
               produkty[i].nazov,
               produkty[i].cena,
               produkty[i].pocet,
               produkty[i].cena * produkty[i].pocet);
    }

    printf("\nSpolu: %d $\n", spolu);

    return 0;
}