#include <stdio.h>

int main() {
	char  letter1, letter2, letter3;
	int moving;

	printf("Enter 3 letter that you want to encrypt \n");
	printf("Enter your first letter: \n");
	scanf(" %c", &letter1);
	printf("Enter your second letter: \n");
	scanf(" %c", &letter2);
	printf("Enter your third letter: \n");
	scanf(" %c", &letter3);
	printf("Enter the number to be moved: \n");
	scanf(" %d", &moving);

	printf("Your input is: %c %c %c \n", letter1, letter2, letter3);
	
	letter1+=moving;
	letter2+=moving;
	letter3+=moving;
	printf("Your message now: %c %c %c \n", letter1, letter2, letter3);
	return 0;
}
