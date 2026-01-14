#include <stdio.h>

int pocetDelitelu(int cislo) {
    int pocet = 0;
    for (int i=1; i<=cislo;i++) {
        if (cislo % i == 0) {
            pocet++;
        }
    }
    return pocet;
}

int prvocislo(int cislo) {
    if (pocetDelitelu(cislo) == 2) {
        return 1;
    }
    return 0;

}

int main() {
    int vysledek = pocetDelitelu(2);
    int prvocislovysledek = prvocislo(2);
    printf("%d", vysledek);
    printf("\n%d", prvocislovysledek);

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}
