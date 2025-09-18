#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN_OF_GAME 3

enum GAME {
	STONE,
	PAPER,
	SCISSORS
};

char *encryptor(int choise) {
	if (choise == STONE) {
		return "stone";
	}
	else if(choise == PAPER) {
		return "paper";
	}
	else if(choise == SCISSORS) {
		return "scissors";
	}
	else {
		return "Error";
	}
}

void logic_core(char *ch_p, char *ch_m) {
	printf("You: %s, Enemy: %s\n", ch_p, ch_m);
	if ((ch_p == "stone" && ch_m == "paper")
	|| (ch_p == "scissors" && ch_m == "stone")
	|| ch_p == "paper" && ch_m == "scissors") {
		printf("You lose!\n");
	} 	
	else if ((ch_p == "stone" && ch_m == "scissors") 
	|| (ch_p == "scissors" && ch_m == "paper") 
	|| (ch_p == "paper" && ch_m == "stone")) {
		printf("You win!\n");
	}
	else if (ch_p == ch_m) {
		printf("Draw!\n");
	}
	else {
		printf("Error");
	}
}

void menu() {
	printf("Enter your choise: \n");
	printf("0 - stone\n");
	printf("1 - paper\n");
	printf("2 - scissors\n");
}

void startF() {
	srand(time(NULL));
	int times = 0;
	while (times < LEN_OF_GAME) {
		int choise = 0;
		menu();
		scanf(" %d", &choise);
		logic_core(encryptor(choise), encryptor(rand() % 3));
		times++;
	}
}

int main() {
	//srand(time(NULL));
	startF();
	return 0;
}
