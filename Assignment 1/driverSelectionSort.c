#include "insertionSort.h"


void runSelection(){
	printf("\nSELECTION SORT\n");

	//Define array of Ints for SelectionSort
	printf("\n");
	int arrayOfInts2[] = {rand(),rand(),rand(),rand(),rand()};;
	int size = sizeof(arrayofInts2)/sizeof(arrayofInts2[0]);

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
}