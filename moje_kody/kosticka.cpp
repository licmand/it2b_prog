#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	while (1) {
	srand(time(NULL));
	int r = (rand() % 6) + 1;
	/*printf(" %d", r);*/
	
		getchar();
		system("cls");
		if (r == 1) {
			printf(" ______\n|      |\n|   @  | \n|      |\n ------\n\n\n");
		}
		else if (r == 2) {
			printf(" _____\n| @   |\n|     |\n|   @ |\n -----\n\n\n ");
		}
		else if (r == 3) {
			printf(" _____\n|   @ |\n|  @  |\n| @   |\n -----\n\n\n ");
		}
		else if (r == 4) {
			printf(" _____\n| @ @ |\n|     |\n| @ @ |\n ----- \n\n\n");
		}
		else if (r == 5) {
			printf(" _____\n| @ @ |\n|  @  |\n| @ @ |\n ----- \n\n\n");
		}
		else {
			printf(" _____\n| @ @ |\n| @ @ |\n| @ @ |\n ----- \n\n\n");
		}
	}

    int keepalive;
    scanf("%d", &keepalive);
	return 0;
	}
