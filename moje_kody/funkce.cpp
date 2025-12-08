#include <stdio.h>

int umocni3(int x) {
    int y = x*x*x;
    return y;   // funkce vraci hodnotu pomoci return
}

int main () {
    int cislo1;
    printf("Zadej cele cislo:");
    scanf("%d", &cislo1);
    int druha_mocnina = umocni3(cislo1);
    printf("treti mocnina tohoto cisla je: %d\n\n", druha_mocnina);
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}