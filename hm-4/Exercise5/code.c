#include <stdio.h>
#include <stdlib.h>

#define PRICE 50

enum CITY {
	BUDAPEST = 0,
	VIENNA = 1,
//	KOSHICE = 1,
//	BRATISLAVA = 2,
	MUNCHEN = 2,
//	BRNO = 3,
	FRANKFURT = 3,
//	HUMPOLEC = 4,
	BERLIN = 4,
	DRESDEN = 5,
	PRAHA = 6,
};

void printCityList();
void translator(int start, char** pos);

int main() {
	int start = 0;
	printf("Where are you now?: \n");
	printCityList();
	scanf(" %d", &start);
	printf("\n");
	start += 1;
	float price = PRICE;
	float sum = 0;
	char** position = (char**)malloc(sizeof(char*));
	if (start == PRAHA) {
		printf("You already in PRAHA!\n");
		exit(0);
	}
	while (start != PRAHA) {
		price = price + price * 5 / 100;
		translator(start, position);
		printf("Price to %s: %.1f\n", position[0], price);
		start += 1;
		sum += price;
	}
	printf("To PRAHA you need: %.1f euro\n", sum);
}

void printCityList() {
	printf("BUDAPEST - %d\n", BUDAPEST);
	printf("VIENNA - %d\n", VIENNA);
	printf("MUNCHEN - %d\n", MUNCHEN);
	printf("FRANKFURT - %d\n", FRANKFURT);
	printf("BERLIN - %d\n", BERLIN);
	printf("DRESDEN - %d\n", DRESDEN);
	printf("PRAHA - %d\n", PRAHA);
}

void translator(int start, char** pos) {
	if (start == VIENNA) {
		pos[0] = (char*)malloc(7);
		pos[0] = "VIENNA";
	} else if (start == MUNCHEN) {
		pos[0] = (char*)malloc(8);
		pos[0] = "MUNCHEN";
	} else if (start == FRANKFURT) {
		pos[0] = (char*)malloc(10);
		pos[0] = "FRANKFURT";
	} else if (start == BERLIN) {
		pos[0] = (char*)malloc(7);
		pos[0] = "BERLIN";
	} else if (start == DRESDEN) {
		pos[0] = (char*)malloc(8);
		pos[0] = "DRESDEN";
	}
}
