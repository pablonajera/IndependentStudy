/*
Pablo Najera

Instructions:
Write functions for implementing sorting algorithms on an array
(Insertion Sort, Selection Sort and Quick Sort).
Do this for an array of ints, an array of floats and an array of structs.

Also make a driver program that runs tests and prints results.
    -Ex: for an array containing [1,7,2,9,3] the ouput would be
    "The first array is 1,7,2,9,3 and after sorting it is 1,2,3,7,9

Comments:
The folder included with Assignment 1 was for using separated files.
Not sure if it works because my computer would not complie them.
For the Int arrays, randomly generated numbers were used.
*/

#include <stdio.h>
#include <stdlib.h>

void intInsertionSort (int array[], int size);
void floatInsertionSort (float array[], int size);
void intSelectionSort(int array[], int size);
void floatSelectionSort(float array[], int size);
void intQuicksort(int array[], int bottom, int top);
void floatQuicksort(float array[], int bottom, int top);
void printIntArray(int array[], int size);
void printFloatArray(float array[], int size);

int main(int argc, char *argv[]){
	printf("INSERTION SORT\n");

	//Define array of Ints for InsertionSort
	printf("\n");
	int arrayofInts[] = {rand(),rand(),rand(),rand(),rand()};
	int size = sizeof(arrayofInts)/sizeof(arrayofInts[0]);
	int i;

	//Print original arrayofInts
	printf("Originally, the arrayofInts is: ");
	printIntArray(arrayofInts, size);


	//Sort
	intInsertionSort(arrayofInts, size);

	//Print New arrayofInts
	printf("After insertionSort, it is: ");
	printIntArray(arrayofInts, size);



	//define array of Floats for InsertionSort
	printf("\n");
	float arrayOfFloats[] = {1.62,7.12,2.62,9.02,3.41};

	//Print original arrayOfFloats
	printf("Originally, the arrayOfFloats is: ");
	printFloatArray(arrayOfFloats, size);

	//Sort
	floatInsertionSort(arrayOfFloats, size);

	//Print New arrayOfFloats
	printf("After insertionSort, it is: ");
	printFloatArray(arrayOfFloats, size);


	printf("\nSELECTION SORT\n");

	//Define array of Ints for SelectionSort
	printf("\n");
	int arrayOfInts2[] = {rand(),rand(),rand(),rand(),rand()};;

	//Print original arrayOfInts2
	printf("Originally, the arrayOfInts2 is: ");
	printIntArray(arrayOfInts2, size);

	//Sort
	intSelectionSort(arrayOfInts2, size);

	//Print New arrayOfInts2
	printf("After selectionSort, it is: ");
	printIntArray(arrayOfInts2, size);



	//define array of Floats for SelectionSort
	printf("\n");
	float arrayOfFloats2[] = {1.62,7.12,2.62,9.02,3.41};

	//Print original arrayOfFloats2
	printf("Originally, the arrayOfFloats2 is: ");
	printFloatArray(arrayOfFloats2, size);

	//Sort
	floatSelectionSort(arrayOfFloats2, size);

	//Print New arrayOfFloats2
	printf("After selectionSort, it is: ");
	printFloatArray(arrayOfFloats2, size);


	printf("\nQUICK SORT\n");

	//Define array of Ints for QuickSort
	printf("\n");
	int arrayOfInts3[] = {rand(),rand(),rand(),rand(),rand()};;

	//Print original arrayOfInts3
	printf("Originally, the arrayOfInts3 is: ");
	printIntArray(arrayOfInts3, size);

	//Sort
	intQuicksort(arrayOfInts3, 0, size);

	//Print New arrayOfInts3
	printf("After quicksort, it is: ");
	printIntArray(arrayOfInts3, size);



	//define array of Floats for QuickSort
	printf("\n");
	float arrayOfFloats3[] = {1.62,7.12,2.62,9.02,3.41};

	//Print original arrayOfFloats3
	printf("Originally, the arrayOfFloats3 is: ");
	printFloatArray(arrayOfFloats3, size);

	//Sort
	floatQuicksort(arrayOfFloats3, 0, size-1);

	//Print New arrayOfFloats3
	printf("After quicksort, it is: ");
	printFloatArray(arrayOfFloats3, size);
}

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

void intSelectionSort(int array[], int size){
	int minimum;
	int i;
	int j;
	int temp; //for swap

	//loop throught the array
	for (i = 0; i < size; i++)
	{
	  	//set min
		minimum = i;

	    //find min in rest of array by comparing to min
		for (j = i + 1; j < size; j++)
			if (array[j] < array[minimum])
				minimum = j;

	    //swap
			temp = array[minimum];
			array[minimum] = array[i];
			array[i] = temp;
		}
}

void floatSelectionSort(float array[], int size){
	int minimum;
	int i;
	int j;
	float temp; //for swap

	//loop throught the array
	for (i = 0; i < size; i++)
	{
	  	//set min
		minimum = i;

	    //find min in rest of array by comparing to min
		for (j = i + 1; j < size; j++)
			if (array[j] < array[minimum])
				minimum = j;

	    //swap
			temp = array[minimum];
			array[minimum] = array[i];
			array[i] = temp;
		}
}

void intQuicksort(int array[], int bottom, int top){
	int pivot;
	int i;
	int j;
	int temp;

	if (bottom < top) {
		pivot = bottom; // select a pivot element
		i = bottom;
		j = top;

		while (i < j) {

			//find a number toper than pivot
			while (array[i] <= array[pivot] && i <= top)
				i++;

			//find a bottomer number than pivot
			while(array[j] > array[pivot] && j >= bottom)
				j--;

			if(i < j) {
				//swap nummbers
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		//Here we are sure that j <= i, so swap pivot num with j num
		temp = array[j];
		array[j] = array[pivot];
		array[pivot] = temp;

		//Repeat quicksort on lower and higher of j
		intQuicksort(array, bottom, j-1);
		intQuicksort(array, j+1, top);
	}
}

void floatQuicksort(float array[], int bottom, int top){
	int pivot;
	int i;
	int j;
	float temp;

	if (bottom < top) {
		pivot = bottom; // select a pivot element
		i = bottom;
		j = top;

		while (i < j) {

			//find a number toper than pivot
			while (array[i] <= array[pivot] && i <= top)
				i++;

			//find a bottomer number than pivot
			while (array[j] > array[pivot] && j >= bottom)
				j--;

			if (i < j) {
				//swap nummbers
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		//Here we are sure that j <= i, so swap pivot num with j num
		temp = array[j];
		array[j] = array[pivot];
		array[pivot] = temp;

		//Repeat quicksort on lower and higher of j
		floatQuicksort(array, bottom, j-1);
		floatQuicksort(array, j+1, top);
	}
}

void printIntArray(int array[], int size){
	int i;
	for (i = 0; i < size; i++){
		printf("%d,", array[i]);
	}
	printf("\n");
}

void printFloatArray(float array[], int size){
	int i;
	for (i = 0; i < size; i++){
		printf("%f,", array[i]);
	}
	printf("\n");
}