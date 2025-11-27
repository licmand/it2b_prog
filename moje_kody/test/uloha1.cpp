#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
    int a = 0, e = 0, i = 0, o = 0, u = 0; 
    char string[20];
    char nejcastejsi;
    printf("zadej string: ");
    scanf("%19s",string);
    for(int i = 0; strlen(string) > i; i++) {
        if(string[i] == 'a') {
            a++;
        }
        if(string[i] == 'e') {
            e++;
        }
        if(string[i] == 'i') {
            i++;
        }
        if(string[i] == 'o') {
            o++;
        }
        if(string[i] == 'u') {
            u++;
        }
    }
    if (a>e && a>i && a>o && a>u) {
        nejcastejsi = 'a';
    }
    if (e>a && e>i && e>o && e>u) {
        nejcastejsi = 'e';
    }
    if (i>e && i>a && i>o && i>u) {
        nejcastejsi = 'i';
    }
    if (o>e && o>i && o>a && o>u) {
        nejcastejsi = 'o';
    }
    if (u>e && u>i && u>o && u>a) {
        nejcastejsi = 'u';
    }

    printf("Nejcastejsı samohlaska: %c", nejcastejsi);


    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}