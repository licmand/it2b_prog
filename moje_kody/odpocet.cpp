#include <stdio.h>

int odpocetSekund(int h, int m, int s) {
    int vysledek = (23-h)*60*60;
    vysledek += (59-m)*60;
    vysledek += 60-s;
    return(vysledek);
}

int main() {
    int dopulnoci = odpocetSekund(23, 59, 50);
    printf("do pulnoci zbyva: %d s", dopulnoci);
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}