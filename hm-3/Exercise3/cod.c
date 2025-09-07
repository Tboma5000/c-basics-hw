#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x, y, max = 0;
	int row, column = 0;
	printf("Enter a size of matrix: ");
	scanf(" %d %d", &x, &y);
	int matrix[x][y];
	srand(time(NULL));
	
	printf("\n");

	for (int i=0; i<x; i++) {
		for (int j=0; j<y; j++) {
			matrix[i][j] = rand() % 100 +1;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i=0; i<x; i++) {
		for (int j=0; j<y; j++) {
			if (max<matrix[i][j]) {
				max = matrix[i][j];
				row = i+1;
				column = j+1;	
			}
		}
	}

	printf("The hightes number in matrix: %d, row: %d, column: %d", max, row, column);
	return 0;
}
