#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int m, n = 0;
	int island = 0;
	printf("Enter a size of map: ");
	scanf(" %d %d", &m, &n);
	int map[m][n];
	srand(time(NULL));
	
	printf("\n");

	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			map[i][j] = rand() % 2;
			printf("%d ", map[i][j]); 
		}
		printf("\n");
	}


	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			if (map[i][j] == 1) {
				if (map[i+1][j] != 1 && map[i][j+1] != 1) {
					if (map[i+1][j] == 0 && map[i-1][j] == 0  && map[i][j+1] == 0  && map[i][j-1] == 0) {
                                      	  island -= 1;
        	                        }
					else {
						island += 1;	
					}
				}
			}
		}
	}
	printf("Total islands: %d", island-1);
	return 0;
}
