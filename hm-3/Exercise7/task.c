#include <stdio.h>
#include <stdlib.h>

void print_arr(int *array, int size) {
	printf("\nYour array: \n");
	for (int i=0; i<size; i++) {
		printf("%d ", array[i]);
	}
}

int main() {
	int storage = 1;
	int item, real_size = 0;
	int *arr = (int*)malloc(storage * sizeof(int));

	printf("Enter a numbers to array\n");
	printf("To stop enter ctrl + d: \n");
	while(scanf(" %d", &item)==1) {
		if (storage==real_size) {
			int new_storage = storage +1;
			int *temp = (int*)realloc(arr, new_storage * sizeof(int));
			if (!temp) {
				free(arr);
				return 0;
			}
			arr = temp;
			storage = new_storage;
		}
		arr[real_size++] = item;
	}
	int size = sizeof(arr) / sizeof(arr[0]);
	
	//if (storage>real_size) {
	//	int new_storage = storage-1;
	//	int *temp = (int*)realloc(arr, new_storage * sizeof(int));
	//	arr = temp;
	//	storage = new_storage;
	//}


	print_arr(arr, storage);
	
	int position = 0;
	for (int move=0; move<storage; move++) {	
		int min = arr[move];
		for (int i=move; i<storage; i++) {
			if (min>arr[i]) {
				min = arr[i];
				position = i;
				//printf("\nMin: %d\n", min);
				
				int temp = arr[move];
				arr[move] = arr[position];
				arr[position] = temp;
			}
		}
		//print_arr(arr, storage);
	}
	print_arr(arr, storage);

	free(arr);
	return 0;
}
