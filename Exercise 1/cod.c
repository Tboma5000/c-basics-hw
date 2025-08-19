#include <stdio.h>
#include <stdlib.h>

int main(){
	float numb1, numb2, result;
	char operation;
	printf("Enter first number: \n");
	scanf("%f", &numb1);
	printf("Enter second number: \n");
	scanf("%f", &numb2);
	printf("Enter operation symbol(+, -, *, /): \n");
	scanf(" %c", &operation);

	printf("first num: %f, second numb: %f, operation symbol: %c \n", numb1, numb2, operation);

	switch(operation) {
		case '+':
			result = numb1+numb2;
			break;
		case '-': 
			result = numb1-numb2;
			break;
		case '*':
			result = numb1 * numb2;
			break;
		case '/':
			if (numb2!=0) {
				result = numb1/numb2;
				break;
			}
			else {
				printf("Error. You can`t divide on 0! \n");
				exit(0);
			}
	}
	printf("Your Result is %f \n", result);
	return 0;
}
