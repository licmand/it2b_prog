#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char strany[][14] = {"ANO", "SPOLU", "SPD", "STAN", "Pirati", "Motorista", "Stacilo", "Jine"};
    float preference[] = {29.3, 20.5, 13.4, 11.1, 10, 6, 5.5, 4.2};
    int hlasy[] = {0,0,0,0,0,0,0,0};
    float procenta[] = {0,0,0,0,0,0,0,0};
    int muze_volit = 8300000;
    int bude_volit_procent = (rand() % 30) + 51;
    int bude_volit = (muze_volit * bude_volit_procent) / 100;

    printf("Bude volit procent: %d\n", bude_volit_procent);

    printf("Bude volit: %d\n", bude_volit);
     
    printf("Probiha hlasovani...\n\n");

    for (int i = 0; i < bude_volit; i++) {
        int r = rand() % 101; // číslo 0–100

        if (r<=29.3){
            hlasy[0]++;
        }
        else if(r<=49.8) {
            hlasy[1]++;
        }
        else if (r<=63.2){
            hlasy[2]++;
        }
        else if (r<=74.3) {
            hlasy[3]++;
        }
        else if (r<=84.3) {
            hlasy[4]++;
        }
        else if (r<=90.3) {
            hlasy[5]++;
        }
        else if (r<=95.8) {
            hlasy[6]++;
        }
        else if (r<=100) {
            hlasy[7]++;
        }
        else {
                printf("\n\nnekde nastala chyba\n\n");
        }
    }
    
    for (int i = 0; i < 8; i++) {
        procenta[i] = ((float)hlasy[i]/bude_volit)*100;
        //printf("\nprocnta vygenerovane i=%d procenta: %.2f\n", i, procenta[i]);
        printf("%s ziskalo %d hlasu a ma %.2f%%\n", strany[i], hlasy[i], procenta[i]);

    }

    /*printf("\n%s ziskalo %d hlasu a ma %.2f %\n", strany[0], hlasy[0], procenta[0]);
    printf("%s ziskalo %d hlasu a ma %.2f %\n", strany[1], hlasy[1], procenta[1]);
    printf("%s ziskalo %d hlasu a ma %.2f %\n", strany[2], hlasy[2], procenta[2]);
    printf("%s ziskalo %d hlasu a ma %.2f %\n", strany[3], hlasy[3], procenta[3]);
    printf("%s ziskalo %d hlasu a ma %.2f %\n", strany[4], hlasy[4], procenta[4]);
    printf("%s ziskalo %d hlasu a ma %.2f %\n", strany[5], hlasy[5], procenta[5]);
    printf("%s ziskalo %d hlasu a ma %.2f %\n", strany[6], hlasy[6], procenta[6]);
    printf("%s ziskalo %d hlasu a ma %.2f %\n", strany[7], hlasy[7], procenta[7]);*/

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}