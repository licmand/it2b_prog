#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char strany[][14] = {"ANO", "SPOLU", "SPD", "STAN", "Piráti", "Motoristé", "Stačilo", "Jiné"};
    float preference[] = {29.3, 20.5, 13.4, 11.1, 10, 6, 5.5, 4.2};
    int hlasy[] = {0,0,0,0,0,0,0,0};
    int muze_volit = 8300000;
    int bude_volit_procent = (rand() % 30) + 51;
    int bude_volit = (muze_volit * bude_volit_procent) / 100;

    printf("Bude volit procent: %d\n", bude_volit_procent);

    printf("Bude volit: %d\n", bude_volit);
     
    printf("Probiha hlasovani\n");

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

    printf("%s ziskalo %d hlasu a ma %.f %", strany[0], hlasy[0],((hlasy[0]/bude_volit)*100));
    printf("%s ziskalo %d hlasu a ma %.f %", strany[1], hlasy[1],((hlasy[1]/bude_volit)*100));
    printf("%s ziskalo %d hlasu a ma %.f %", strany[2], hlasy[2],((hlasy[2]/bude_volit)*100));
    printf("%s ziskalo %d hlasu a ma %.f %", strany[3], hlasy[3],((hlasy[3]/bude_volit)*100));
    printf("%s ziskalo %d hlasu a ma %.f %", strany[4], hlasy[4],((hlasy[4]/bude_volit)*100));
    printf("%s ziskalo %d hlasu a ma %.f %", strany[5], hlasy[5],((hlasy[5]/bude_volit)*100));
    printf("%s ziskalo %d hlasu a ma %.f %", strany[6], hlasy[6],((hlasy[6]/bude_volit)*100));
    printf("%s ziskalo %d hlasu a ma %.f %", strany[7], hlasy[7],((hlasy[7]/bude_volit)*100));

    int keepalive;
    scanf("%d", &keepalive);
    return 0;
}