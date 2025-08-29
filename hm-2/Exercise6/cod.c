#include <stdio.h>

#define MOVE 1
#define ADD(numb, moving) (numb + moving)

int main() {
	int numb = 0;
	printf("Enter your number: \n");
	scanf(" %d", &numb);

	for (int i=MOVE; i<=7; i++) {
		printf("%d ", ADD(numb, i));
	}
	return 0;
}
