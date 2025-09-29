#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char arr[] = {'a','b','c','d','e'};
	srand(time(NULL));
	int r = (rand() % 5);
	printf("tady mas random znak lol: %c", arr[r]);

    int keepalive;
    scanf("%d", &keepalive);
	return 0;
}