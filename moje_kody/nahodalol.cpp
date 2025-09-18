#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));

    int cislo = rand() % 100;

    printf("nahdone cislo: %d\n", cislo);
    
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}