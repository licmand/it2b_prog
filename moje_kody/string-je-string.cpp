#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main() {
    int rovno = 1;
    char string1[70], string2[70];
    printf("napis string(max 69 znaku): ");
    scanf(" %69s" ,string1);
    printf("napis druhy string(max 69 znaku): ");
    scanf(" %69s" ,string2);

    int delka = strlen(string1);
    
    for(int i=0; i < delka; i++) {
        if (string1[i] == string2[i]) {
            rovno = 1;
        }
        else {
            printf("\nnerovnaji se");
            int keepalive;
            scanf("%d", &keepalive);
            return 0;
        }

    }
    printf("\nrovnaji se");
    
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}