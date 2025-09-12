#include <stdio.h>

int main() {
        //alfabet
        char alfabet[25];
        int count[25];

        for (int i=97; i<=122; i++) {
                int b = 0;
                alfabet[b] = i;
                printf("%c ", alfabet[b]);
                b++;
        }

        printf("\n");

        for (int i=0; i<=25; i++) {
                count[i] = 0;
                printf("%d ", count[i]);
        }

	printf("\n");

	char buff[128];
	printf("Enter some text: \n");
	fgets(buff, sizeof(buff), stdin);
	//printf("%s", buff);
	int len = 0;
	while (buff[len]) {
		len++;
	}

	for (int i=0; i<=len; i++) {
		
	}
        return 0;
}

