#include <stdio.h>

int main() {
	int numb = 3;
	//printf("Enter a number: \n");
	//scanf(" %d", &numb);
/*
	int comparing = numb % 2;
	if (comparing == 0) {
		max = numb + 1;
	}
	else {
		max = numb + 2;
	}
*/	
	printf(" %d", numb);
	int max = numb + 2;
	printf(" %d", max);
	int matrix[max-1][max-1];

	for (int i=0; i < max ; i++) {
		for (int j=0; j < max; j++) {
			matrix[i][j] = numb;
			//printf(" %d", matrix[i][j]);
		}	
		//printf("\n");
	}

	for (int i=1; i < max-1; i++) {
		for (int j=1; j < max-1; j++) {
			matrix[i][j] = numb - 1;
		}
	}

	for (int i=0; i<max; i++) {	
		for (int j=0; j<max; j++) {
			printf(" %d", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
