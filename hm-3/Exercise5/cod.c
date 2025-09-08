#include <stdio.h>
#include <string.h>

int main() {
	char str[30];
	printf("Enter some text: \n");
	fgets(str, sizeof(str), stdin);
	char result[30];

	for (int i=0; i<strlen(str); i++) {
		if (str[i] != '\0') {
			result[i] = str[i];
		}
		else {
			for (int move=1; move<strlen(str); move++) {
				if (str[i+move] == '\0') {
				continue;
				}
				else {
					result[i] = str[i+move];
					break;
				}
			}
		}
	}

	for (int i=0; i<strlen(str); i++) {
		printf("%c", str[i]);
	}
	return 0;
}
