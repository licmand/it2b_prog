#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
    char string[20];
    printf("zadej string: ");
    scanf("%19s",string);
    for(int i = 0;i < strlen(string); i++)
    if (string[i] > 'Z') {
        string[i] = string[i] - 32;
    }
    printf("%s", string);

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}