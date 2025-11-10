#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int i = 0;
    char znak[] = "Astolfo";
    while (i < 7) {
        printf("%c\n", znak[i]);
        i++;
    }
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}