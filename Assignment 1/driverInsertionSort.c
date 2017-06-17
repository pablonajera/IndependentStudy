#include "insertionSort.h"


void runInsertion(){
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
}