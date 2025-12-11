#include <stdio.h>

void pyramida(int patra) {
    int pocet_znaku = 1;
    for (int i=0;i<patra;i++) {
        for (int k=0;k<patra-i-1;k++) {
            printf(" ");
        }
        for (int j=0;j<pocet_znaku;j++) {
            printf("#");
        }
        pocet_znaku += 2;
        printf("\n");
    }
}
void kmen(int delka) {
    int velikost_spodku = (delka*2);
    int sirka = velikost_spodku/3;
    for(int h=0;h<delka;h++) {
        for(int g=0;g<sirka;g++) {
            printf(" ");
        }
        for(int g=0;g<sirka;g++) {
            printf("#");
        }
        printf("\n");
    }
}

int main () {
    int velikost_stromu = 5;
    pyramida(velikost_stromu);
    pyramida(velikost_stromu);
    pyramida(velikost_stromu);
    kmen(velikost_stromu);
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}