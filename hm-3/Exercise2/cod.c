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

	printf("matrix1: \n");
	for (int i=0; i<x1; i++) {
                for (int j=0; j<y1; j++) {
                        matrix1[i][j] = rand() % 100 +1;        
                        printf(" %d", matrix1[i][j]);
                }
                printf("\n");
        }

        printf("\n");

	printf("matrix2: \n");
        for (int i=0; i<x2; i++) {
                for (int j=0; j<y2; j++) {
                        matrix2[i][j] = rand() % 100 +1;
                        printf(" %d", matrix2[i][j]);
                }
                printf("\n");
        }

	printf("\n");

	if (operator=='+') {
		if (x1==x2 && y1==y2) {
			int matrixResult[x1][y1];
			//matrixResult[0][0] = matrix1[0][0] + matrix2[0][0];
			//matrixResult[0][1] = matrix1[0][1] + matrix2[0][1];		
			for (int i=0; i<x1; i++) {
				for (int j=0; j<y1; j++) {
					matrixResult[i][j] = matrix1[i][j] + matrix2[i][j];
				}
			}
			printf("Result: \n");
			for (int i=0; i<x1; i++) {
		                for (int j=0; j<y1; j++) {
                	        	printf(" %d", matrixResult[i][j]);
              			}
              			 printf("\n");
       			 }
	
		}
		else {
			printf("\nYou can`t add matrixs with different quantity of rows and columns");
		}		
	}
	else if (operator=='-') {
		if (x1==x2 && y1==y2) {
                        int matrixResult[x1][y1];
                        //matrixResult[0][0] = matrix1[0][0] + matrix2[0][0];
                        //matrixResult[0][1] = matrix1[0][1] + matrix2[0][1];           
                        for (int i=0; i<x1; i++) {
                                for (int j=0; j<y1; j++) {
                                        matrixResult[i][j] = matrix1[i][j] - matrix2[i][j];
                                }
                        }
			printf("Result: \n");
			for (int i=0; i<x1; i++) {
		                for (int j=0; j<y1; j++) {
                		        printf(" %d", matrixResult[i][j]);
               			}
               			printf("\n");
       			}

                }
                else {
                        printf("\nYou can`t subtract matrixs with different quantity of rows and columns");
                }
	}
	/* In progress
	else if (operator=='*') {
	 	if (y1==x2) {
			int matrixResult[x1][y2];
			//matrixResult[0][0] = matrix1[0][0] * matrix2[0][0] + matrix1[0][1] * matrix2[1][0];
			//matrixResult[0][1] = matrix1[0][0] * matrix2[0][1] + matrix1[0][1] * matrix2[1][1];
			//matrixResult[1][0] = matrix1[1][0] * matrix2[0][1] + matrix1[1][1] * matrix2[1][1];
			//matrixResult[1][1] = matrix1[1][0] * matrix2[1][0] + matrix1[1][1] * matrix2[2][0];
			for (int i=0; ; i++) {
				for (int j=0; ; j++) {
					
				}
			}
		}
		else {
			printf("\nError. You can`t multiply matrixs, where quantity of rows and columns are different");
		}	
	}
	*/
	else {
		printf("\nError");
	}

	printf("\n");
	return 0;
}
