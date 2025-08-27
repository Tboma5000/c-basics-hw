#include <stdio.h>

int main() {
	float a, b, c, discriminator;
	printf("Enter coefficient \'a\': \n");
	scanf("%f", &a);
	printf("Enter coefficient \'b\': \n");
	scanf("%f", &b);
	printf("Enter coefficient \'c\': \n");
	scanf("%f", &c);

	printf("Your input is: a = %f, b = %f, c = %f \n", a, b, c);

	discriminator = b * b - 4 * a * c;
	printf("Discriminator = %f \n", discriminator);
	return 0;
}
