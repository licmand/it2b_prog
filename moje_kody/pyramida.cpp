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

int main () {
    pyramida(10);
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}