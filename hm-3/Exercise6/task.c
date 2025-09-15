#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print_arr(int size, char arr[size][2]) {
	for (int i=0; i<2; i++) {
		for (int j=0; j<size; j++) {
			printf("%c ", arr[j][i]);
		}
		printf("\n");
	}
}

int main() {
	char buff[128];
	printf("Enter some text: \n");
	fgets(buff, sizeof(buff), stdin);
	
	char *text = (char*)malloc(strlen(buff)-1);
	text = buff;
	int storage = strlen(text)-1;
	char symbols[storage][2];
	memset(symbols, '0', (strlen(text))*2);
	int move = 0;	
	
	for (int i=0; i<storage; i++) {
		text[i] = tolower(text[i]);
	}

	for (int i=0; i<storage; i++) {
		char check = text[i];
		int exit = 0;
		printf("\n%c\n", check);
		for (int b=0; b<storage; b++) {
			if (check == symbols[b][0]) {
				symbols[b][1] += 1;
				exit += 1;
				break;
			}
		}

		if (exit != 0) {
			continue;
		}
		else {
			symbols[move][0] = check;
			symbols[move][1] += 1;
			move++;
		}

		print_arr(storage, symbols);
	}
	printf("\n");
	char max = ' ';
	char sym = ' ';
	for (int i=0; i<storage; i++) {
		//printf("\n%c\n", max);
		if (symbols[i][1] > max) {
			sym = symbols[i][0];
			max = symbols[i][1];
		} 
	}
	print_arr(storage, symbols);
	for (int i=0; i<storage; i++) {
		if (symbols[i][1] == max) {
			sym = symbols[i][0];
			max = symbols[i][1];
			printf("Symbol: %c, amount: %c\n", sym, max);
		}
	}
	//print_arr(symbols);
	/*
	else {	
		symbols[move][0] = check;
		symbols[move][1] += 1;
		move++;
		break;
	}
	*/
	return 0;
}
