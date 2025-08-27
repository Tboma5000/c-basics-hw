#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void cheking(int* num, int* n) {
	if (*num != 1) {
		int check = *num % *n;
		printf("Check: %d, n: %d, num: %d \n", check, *n, *num);
		if (check == 0 && *n != *num) {
			printf("Number %d is not primary \n", *num);
		}
		else if (check == 0 && *n == *num) {
			printf("Number %d is primary \n", *num);
		}
		else {
			*n+=1;
			cheking(num, n);	
		}
	}
	else {
		printf("Number is primary and equal 1 \n");
	}
}

int main() {
	int* num;
	int two = 2;
	int* n = &two;
	char loop;
	while(1) {
		printf("Enter a number: \n");
		scanf(" %d", num);
		fflush(stdin);
		//printf(" %d %d \n", *num, *n);
		cheking(num, n);
		
		while(1) {
			printf("Do you want to conntinue your checking?(y/n) \n");
			scanf("  %c", &loop);
			if (loop == 'y') {
				printf("\n");
				break;
			}
			else if (loop == 'n') {
				exit(0);
			}
			else {
				printf("Wrong answer. Try again \n\n");
				continue;
			}
		}
	}
	return 0;
}
