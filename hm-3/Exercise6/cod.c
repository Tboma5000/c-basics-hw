#include <stdio.h>

int main() {
	char str[30];
	printf("Enter some text: \n");
	//fgets(str, sizeof(str), stdin);

	int symbol[26];

	for (int i=97; i<123; i++) {
		int move = 0;
		symbol[move] = i;
		move += 1;
		printf("%d ", symbol[i]);
	}
	return 0;
}
