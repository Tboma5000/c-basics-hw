#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int count=0;
	printf("Enter number of words: \n");
	scanf(" %d", &count);

	char *text[100];
	char buff[128];

	for (int i=0; i<count; i++) {
		scanf(" %127s", buff);
		int len = strlen(buff);
		text[i] = (char *)malloc(len+1);
		for (int b=0; b<=len; b++) {
			text[i][b] = buff[b];
		}
		//printf("%s\n", text[i]);
	}

	int total_len=0;
	for (int i=0; i<count; i++) {
		for (char *s=text[i]; *s; s++) {
			total_len++;
			if (i+1<count) {
				total_len++;
			}
		}
	}
	printf("Len: %d\n", total_len);
	char *join_str = (char *)malloc(total_len+1);
	char *writer = join_str;

	for (int i=0; i<count; i++) {
		for (char *s=text[i]; *s; s++) {
			*writer++ = *s;
		}
		//printf("%s", writer);
		if (i+1<count) {
			*writer++ = ' ';
		}
	}
	//printf("\n");
	printf("Result: %s", join_str);
	return 0;
}
