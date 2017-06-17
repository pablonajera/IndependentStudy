/*
Write functions for implementing sorting algorithms on an array (Insertion Sort, Selection Sort and Quick Sort).
Do this for an array of ints, an array of floats and an array of structs.

Also make a driver program that runs tests and prints results.
    -Ex: for an array containing [1,7,2,9,3] the ouput would be
    "The first array is 1,7,2,9,3 and after sorting it is 1,2,3,7,9
*/

#include <stdio.h>

void intInsertionSort (int array[], int size){
	int key;
	int i;
	int j;

	//loop though array
	for (i = 0; i < size; i++ ){
		key = array[i];
		j = i-1;

		//move items greater than next item up
		while (j >= 0 && key < array[j]){
			array[j+1] = array[j];
			j -= 1;
		}
		array[j+1] = key;
	}
}

void floatInsertionSort (float array[], int size){
	int key;
	int i;
	int j;

	//loop through the array
	for (i = 0; i < size; i++ ){
		key = array[i];
		j = i-1;

		//move items greater than next item up
		while (j >= 0 && key < array[j]){
			array[j+1] = array[j];
			j -= 1;
		}
		array[j+1] = key;
	}
}

int main(){
	//define array of INTS & size
	int arryOfInts[] = {1,7,2,9,3};
	int size = sizeof(arryOfInts)/sizeof(arryOfInts[0]);
	int i;

	//Print original arryOfInts
	printf("Originally, the arryOfInts is: ");
	for (i = 0; i < size; i++){
		printf("%d,", arryOfInts[i]);
	}
	printf("\n");

	//Sort
	intInsertionSort(arryOfInts, size);

	//Print New arryOfInts
	printf("After insertionSort, it is: ");
	for (i = 0; i < size; i++){
		printf("%d,", arryOfInts[i]);
	}
	printf("\n");



	//define array of FLOATS & size
	printf("\n");
    float arrayOfFloats[] = {1.62,7.12,2.62,9.02,3.47};
	size = sizeof(arrayOfFloats)/sizeof(arrayOfFloats[0]);

	//Print original arrayOfFloats
	printf("Originally, the arrayOfFloats is: ");
	for (i = 0; i < size; i++){
		printf("%f,", arrayOfFloats[i]);
	}
	printf("\n");

	//Sort
	floatInsertionSort(arrayOfFloats, size);

	//Print New arrayOfFloats
	printf("After insertionSort, it is: ");
	for (i = 0; i < size; i++){
		printf("%f,", arrayOfFloats[i]);
	}
	printf("\n");
}
