#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMatrix(int m, int n, char mat[m][n]) {
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			printf("%c ", mat[i][j]);
		}
		printf("\n");
	}
}

void fillingMatrix(int m, int n, char sym, char mat[m][n]) {
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			mat[i][j] = sym;
		}
	}

	for (int i=1; i<m-1; i++) {
		for (int j=1; j<n-1; j++) {
			mat[i][j] = '0';
		}
	}	
}

void startF() {
	int m, n = 0;
	printf("Enter a size of matrix: \n");
	scanf(" %d %d", &m, &n);
	char matrix[m][n];
	
	char symbol = ' ';
	printf("Enter a symbol to fill a frame of matrix: \n");
	scanf(" %c", &symbol);
	fillingMatrix(m, n, symbol, matrix);
	printf("\nResult:\n");
	printMatrix(m, n, matrix);
}

int main() {
	startF();	
	return 0;
}
