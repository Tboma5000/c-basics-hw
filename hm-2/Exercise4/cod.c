#include <stdio.h>

int main() {
	int a, b = 0;
	char symb = '\0';
	printf("Enter a size and a symbol: \n");
	printf("Size: ");
	scanf(" %d %d", &a, &b);
	printf("Symbol: ");
	scanf(" %c", &symb);
	printf("\n");

	for (int i=0; i<a; i++) {
		for (int j=0; j<b ; j++) {
			printf("%c", symb);
		}
		printf("\n");
	}
	return 0;
}
