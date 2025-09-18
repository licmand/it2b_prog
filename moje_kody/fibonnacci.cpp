#include <stdio.h>
#include <stdlib.h>

int main() {
	int velikost;
	printf("Zadejte kolik cisel Fibonnacciho sekvence chces vypsat: ");
	scanf_s("%d", &velikost);
	int *pole = (int*)malloc(velikost * sizeof(int));
	if (pole == NULL) {
		printf("Pokud to nebylo jasne, tak mas zadat normalni cislo!\n");
		return 1;
	}

	int prvnicislo = 1, druhecislo = 1;
	for (int i = 0; i < velikost; i++) {
		pole[i] = prvnicislo + druhecislo;
		prvnicislo = druhecislo;
		druhecislo = pole[i];
		int cislocisla = i + 1;
		printf("%d: %d \n", cislocisla, pole[i]);
	}
	free(pole);

    int keepalive;
    scanf("%d", &keepalive);
	return 0;
}