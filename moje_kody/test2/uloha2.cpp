#include <stdio.h>

int jeKladne(int pole[], int delka) {
    for(int i=0; i<delka;i++)
    if (pole[i] <= 0) {
        return 0;
    }
    return 1;
}

void histogram(int pole[], int n) {
    if (jeKladne(pole, n) == 0) {
        printf("CHYBA!");
    }

    for (int k=0;k<n;k++) {
        printf("\n| ");
        for (int j=0; j<pole[k];j++) {
            printf("*");
        }
    }
}

int main() {
    int pole[] = {3, 1 ,4};
    int n = 3;
    histogram(pole, n);

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}
