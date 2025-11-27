#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char string[70];
	int p=0;
	
	printf("napis string malym lol: ");
	scanf("%69s", string);
	printf("o kolik se to ma posunout:P : ");
	scanf("%d", &p);
	int delka=strlen(string);
	for(int i = 0;i<delka;i++){
		string[i]=string[i]+p;
		if(string[i]>'z'){
			string[i]= string[i]-'z'+'a'-1;
		}
	}
	printf("%s",string);

    int keepalive;
    scanf("%d", &keepalive);
	
	return 0;
}
