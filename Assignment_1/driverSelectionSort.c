#include <stdlib.h>
#include "insertionSort.h"
#include "printArray.h"


void runSelection(){
	printf("\n|||    SELECTION SORT   |||\n\n");

	//Define array of Ints for SelectionSort
	int arrayOfInts2[] = {rand(),rand(),rand(),rand(),rand()};;
	int size = sizeof(arrayOfInts2)/sizeof(arrayOfInts2[0]);


	//Print original arrayOfInts2
	printf("Originally, the arrayOfInts2 is:\n");
	printIntArray(arrayOfInts2, size);

	//Sort
	intSelectionSort(arrayOfInts2, size);

	//Print New arrayOfInts2
	printf("After selectionSort, it is:\n");
	printIntArray(arrayOfInts2, size);

	//define array of Floats for SelectionSort
	
	float arrayOfFloats2[] = {1.62,7.12,2.62,9.02,3.41};

	//Print original arrayOfFloats2
	printf("Originally, the arrayOfFloats2 is:\n");
	printFloatArray(arrayOfFloats2, size);

	//Sort
	floatSelectionSort(arrayOfFloats2, size);

	//Print New arrayOfFloats2
	printf("After selectionSort, it is:\n");
	printFloatArray(arrayOfFloats2, size);
	
	//define array of Struct Cats for SelectionSort
	struct Cat whiskers2 = {.age = rand(), .name = "Whiskers"};
	struct Cat peter2 = {.age = rand(), .name = "Peter"};
	struct Cat mittens2 = {.age = rand(), .name = "Mittens"};
	struct Cat catniss2 = {.age = rand(), .name = "Catniss"};
	struct Cat caterine2 = {.age = rand(), .name = "Caterine"};	
	struct Cat arrayOfCats2[] = {whiskers2, peter2, mittens2, catniss2, caterine2};
	
	//Print Original array of Struct Cats
	printf("Originally, the array of Struct Cats is:\n");
	printStructArray(arrayOfCats2, size);
	
	//Sort
	catSelectionSort(arrayOfCats2, size);
	
	//Print New array of Struct Cats
	printf("After selectionSort, it is:\n");
	printStructArray(arrayOfCats2, size);

}