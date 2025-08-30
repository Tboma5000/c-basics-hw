#include <stdio.h>

int main() {
	int numb;
	int max;
	printf("Enter a number: \n");
	scanf(" %d", &numb);
	
	int comparing = numb % 2;
	int progression = (numb / 2);
	
	if (comparing == 0) {
		max = numb + progression + progression-1;
	}
	else {
		max = numb + progression + progression;
		//printf(" %d \n", max);
	}
	int matrix[max][max];
	for (int move=0; move < max; move++) {
		for (int i=0+move; i < max-move ; i++) {
			for (int j=0+move; j < max-move; j++) {
				matrix[i][j] = numb-move;
				//printf(" %d", matrix[i][j]);
			}	
			//printf("\n");
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
