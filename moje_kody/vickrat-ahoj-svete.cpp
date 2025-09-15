#include <stdio.h>

int main() {
    int nasobek;

    printf("zadej kolikrat se ma vypsat hello world: ");
    scanf("%d", &nasobek);
 
    if (nasobek <= 0) {
        printf("error lol");
        int keepalive;
        scanf("%d", &keepalive);
        return 1;
    }

    else {
        for (int i = 0; i < nasobek; i++) {
            printf("Hello World\n");
        }
    }

    
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}