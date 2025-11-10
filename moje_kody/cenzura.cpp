#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main() {
    char heslo[70];
    printf("napis heslo co chces cenzurovat(max 69 znaku): ");
    scanf(" %70s" ,heslo); 
    int delka = strlen(heslo);
    
    for(int i=1; i < delka; i = i+2) {
        heslo[i] = '#';
    }

    printf("%s" ,heslo);

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}