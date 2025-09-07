#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x1, x2, y1, y2 = 0;
	printf("Enter a size of matrix1: ");
	scanf(" %d %d", &x1, &y1);
	printf("\nEnter a size of matrix 2: ");
	scanf(" %d %d", &x2, &y2);
	srand(time(NULL));
	int matrix1[x1][y1];
	int matrix2[x2][y2];

	char operator = '\0';
        printf("\nEnter operation symbol(+, -, *): ");
        scanf(" %c", &operator);
	printf("\n");

	for (int i=0; i<x1; i++) {
                for (int j=0; j<y1; j++) {
                        matrix1[i][j] = rand() % 100 +1;        
                        printf(" %d", matrix1[i][j]);
                }
                printf("\n");
        }

        printf("\n");

        for (int i=0; i<x2; i++) {
                for (int j=0; j<y2; j++) {
                        matrix2[i][j] = rand() % 100 +1;
                        printf(" %d", matrix2[i][j]);
                }
                printf("\n");
        }

	if (operator=='+') {
		
	}
	else if (operator=='-') {

	}
	else if (operator=='*') {

	}
	else {
		printf("\nError");
	}

	
	return 0;
}
