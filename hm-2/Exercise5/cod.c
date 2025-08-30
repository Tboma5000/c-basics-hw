#include <stdio.h>

int main() {
	int min, max = 0;
	printf("Enter min and max value: ");
	scanf(" %d %d", &min, &max);

	for (int i=1; i<=max-min-1; i++) {
		printf("%d ", min+i);
	}
	printf("\n");

	//This part had created, when I don`t understand task and do something similar:
	for (int i=2; i<=max-min; i+=2) {
		printf("%d ", min+i);
	}
	return 0;
}
