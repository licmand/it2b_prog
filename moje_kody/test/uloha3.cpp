#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
    int shodne = 0;
    char string1[20];
    char string2[20];
    printf("zadej prvni string: ");
    scanf("%19s",string1);
    printf("zadej druhy string: ");
    scanf("%19s",string2);
    if (strlen(string1) != strlen(string2)) {
        return 1;
    }
    for(int i = 0;i < strlen(string1); i++) {
        if (string1[i] == string2[i]) {
            shodne++;
        }
    }
    int delka = strlen(string1);
    int procento = (shodne*100)/delka;
    printf("Shodnych znaku: %d/%d (%d %%)", shodne, delka, procento);

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}