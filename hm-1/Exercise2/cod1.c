#include <stdio.h>
#include <string.h>

int main() {
	char word[20];
	int moving;

	printf("Enter word that you want to encrypt: \n");
	scanf("%s", word);
	printf("Enter the number on that be moved: \n");
	scanf("%d", &moving);

  	size_t len = strlen(word);

	//printf("Lenght: %ld \n", len);

	for (int i=0; i<len; i+=1) {
		word[i]+=moving;
		//printf("%s \n", word);
	}
	printf("Your encrypted word: %s \n", word);
	return 0;
}
