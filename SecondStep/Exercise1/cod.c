#include <stdio.h>
#include <math.h>

int compare(int min, int max) {
	int result;
	if (min > max) {
		printf("Ops. You Type in wrong order. Try again \n");
		result = 1;
	}
	else {
		result = 0;
	}
	return result;	
}

int main() {
	int min, max, check;
	check = 1;
	while (check == 1) {
	printf("Enter min and max value of numbers: \n");
	scanf(" %d %d", &min, &max);
	check = compare(min, max);
	}
	for (int i=1; i<=max; i++) {
		float f = (1 + pow(5, 0.5)) / 2;
		float fibo = (pow(f, i)) / pow(5, 0.5);
		int fiboNumber = round(fibo);			
		//printf("Try: %d, The Fibo Number: %f, about: %d \n", i, fibo, fiboNumber);
		if (fiboNumber > max) {
			break;
		}
		else if (fiboNumber < min) {
			continue;
		}
		else {
			printf(" %d ", fiboNumber);
		}
	}	
	
	return 0;
}
