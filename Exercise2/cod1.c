#include <stdio.h>
#include <string.h>

int main() {
	char word[20];
	

	printf("Enter word that you want to encrypt: \n");
	fgets(word, sizeof(word), stdin);

	size_t len = strlen(word)-1;

		//printf("Lenght: %ld \n", len);

	for (int i=0; i<len; i+=1) {
		word[i]+=1;
		//printf("%s \n", word);
	}
	printf("Your encrypted word: %s \n", word);
	return 0;
}
