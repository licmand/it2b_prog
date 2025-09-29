#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char arr[] = {'a','b','c','d','e'};
	
	while (true) {
		srand(time(NULL));
		int r = (rand() % 5);
		printf("tady mas random znak lol: %c\n", arr[r]);
	}
	
    int keepalive;
    scanf("%d", &keepalive);
	return 0;
}