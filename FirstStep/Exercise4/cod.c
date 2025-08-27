#include <stdio.h>

int main() {
	float celsius, Fahrenheit;

	printf("Enter the temperature value in Celsius: \n");
	scanf("%f", &celsius);

	Fahrenheit = 1.8 * celsius + 32;
	printf("In Fahrenheit: %f \n", Fahrenheit);
	return 0;
}
