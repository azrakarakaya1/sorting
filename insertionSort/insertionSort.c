// insertion sort algorithm & runtime analysis

#include <stdio.h>

void insertionSort(int array[], int length);
void printArray(int array[], int length);

void insertionSort(int array[], int length) {
	
	int key;
	int j;

	for (int i=1; i<length; i++) {
		key = array[i];
		
		j = i-1;
		while (array[j] > key && j >= 0) {
			array[j+1] = array[j];
			j--;
		}

		array[j+1] = key;

		// print array (optional)
		printArray(array, length);
	}
}

void printArray(int array[], int length) {

	int i = 0;
	
	while (i < length) {
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
}

int main() {

	int sampleArray[9] = {8, 13, 18, 9, 10, 2, 11, 34, 12};
	int arrayLength = sizeof(sampleArray)/sizeof(sampleArray[0]);

	insertionSort(sampleArray, arrayLength);

	return 0;
}
