#include <stdio.h>

int main() {
	//alfabet
	char alfabet[25][2];
	//int count[25];

	for (int i=97; i<=122; i++) {
		int b=0;
		alfabet[b][0] = i;
		printf("%c ", alfabet[b][0]);
		b++;
	}

	printf("\n");

	for (int i=0; i<=25; i++) {
		alfabet[i][1] = 0;
		printf("%d ", alfabet[i][1]);
	}
	
	printf("\n");
	return 0;
}
