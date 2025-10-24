#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum MENU {
	STOP = 0,
	CAKE = 1,
	BREAD = 2,
	PASTA = 3,
	PIZZA = 4,
	BEER = 5,
	COFFEE = 6,
	SOUP = 7,
};

void printMenu();
void translator(int choose, int *size, char **arr);
void printOrder(int size, char **arr);

int main() {
	int size = 1;
	char **arr = (char**)malloc(size * sizeof(char*));
	while(1) {
		int choose;
		printMenu();
		printf("Choose something. If it`s all, enter stop\n");
		scanf(" %d", &choose);
		if (choose == STOP) {
			break;
		} else {
			translator(choose, &size, arr);
			int temp = size + 1;
			arr = realloc(arr, temp * sizeof(char*));
			size = temp;
		}
		printf("\n");	
	}
	printOrder(size, arr);
	
	return 0;
}

void printMenu() {
	printf("STOP - %d\n", STOP);
	printf("CAKE - %d\n", CAKE);
	printf("BREAD - %d\n", BREAD);
	printf("PASTA - %d\n", PASTA);
	printf("PIZZA - %d\n", PIZZA);
	printf("BEER - %d\n", BEER);
	printf("COFFEE - %d\n", COFFEE);
	printf("SOUP - %d\n", SOUP);
}

void translator(int choose, int *size, char **arr) {
	if (choose == CAKE) {
		arr[*size-1] = (char*)malloc(5);
		arr[*size-1] = "cake";
	} else if (choose == BREAD) {
		arr[*size-1] = (char*)malloc(6);
		arr[*size-1] = "bread";
	} else if (choose == PASTA) {
		arr[*size-1] = (char*)malloc(6);
		arr[*size-1] = "pasta";
	} else if (choose == PIZZA) {
		arr[*size-1] = (char*)malloc(6);
		arr[*size-1] = "pizza";
	} else if (choose == BEER) {
		arr[*size-1] = (char*)malloc(5);
		arr[*size-1] = "beer";
	} else if (choose == COFFEE) {
		arr[*size-1] = (char*)malloc(7);
		arr[*size-1] = "coffee";
	} else if (choose == SOUP) {
		arr[*size-1] = (char*)malloc(5);
		arr[*size-1] = "soup";
	} else {
		return;
	}
	
}

void printOrder(int size, char **arr) {
	printf("Your order is: \n");
	for (int i=0; i<size-1; i++) {
		printf ("%s ", arr[i]);
	}
}
