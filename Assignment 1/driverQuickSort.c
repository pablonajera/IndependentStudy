#include "quickSort.h"


void runQuick(){
	printf("\nQUICK SORT\n");

	//Define array of Ints for QuickSort
	printf("\n");
	int arrayOfInts3[] = {rand(),rand(),rand(),rand(),rand()};;
	int size = sizeof(arrayofInts3)/sizeof(arrayofInts3[0]);

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