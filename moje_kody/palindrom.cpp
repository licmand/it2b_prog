#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main() {

    char string1[70], string2[70];
    printf("napis string(max 69 znaku): ");
    scanf(" %69s" ,string1);

    int delka = strlen(string1);
    
    for(int i=0; i < delka; i++) {
        //printf("%d", i);
        string2[(delka - 1 - i)] = string1[i];
    }
    //printf("%s", string2);
    if (strcmp(string1, string2) == 0) {
        printf("\nje palindrom");
    }
    else {
        printf("\nneni palindrom");
    }

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}