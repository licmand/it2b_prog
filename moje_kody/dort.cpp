#include <stdio.h>
#include <math.h>

int objemvalca(int r, int v) {
    int V = M_PI * r * r * v;
    return V;
    // funkce vraci hodnotu pomoci return
}

int main () {
    int 
    r1=5,
    r2=10,
    r3=15,
    v1=8,
    v2=16,
    v3=24; 
    int objem_dortu = objemvalca(r1,v1)+objemvalca(r2,v2)+objemvalca(r3,v3);
    printf("objem dortu je : %d\n\n", objem_dortu);
    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}