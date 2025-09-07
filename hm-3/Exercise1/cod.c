#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int x, y = 0;
	printf("Enter size of matrix: ");
	scanf(" %d %d", &x, &y);
	int matrix[x][y];
	srand(time(NULL));

	for (int i=0; i<x; i++) {
		for (int j=0; j<y; j++) {
			matrix[i][j] = rand() % 100 +1;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
