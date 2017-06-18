#include <stdlib.h>
#include "insertionSort.h"
#include "printArray.h"

void runInsertion(){
	printf("|||   INSERTION SORT   ||||\n\n");

	//Define array of Ints for InsertionSort
	int arrayofInts[] = {rand(),rand(),rand(),rand(),rand()};
	int size = sizeof(arrayofInts)/sizeof(arrayofInts[0]);
	int i;

	//Print original arrayofInts
	printf("Originally, the arrayofInts is:\n");
	printIntArray(arrayofInts, size);

	//Sort
	intInsertionSort(arrayofInts, size);

	//Print New arrayofInts
	printf("After insertionSort, it is:\n");
	printIntArray(arrayofInts, size);

	//define array of Floats for InsertionSort
	float arrayOfFloats[] = {1.62,7.12,2.62,9.02,3.41};

	//Print original arrayOfFloats
	printf("Originally, the arrayOfFloats is:\n");
	printFloatArray(arrayOfFloats, size);

	//Sort
	floatInsertionSort(arrayOfFloats, size);

	//Print New arrayOfFloats
	printf("After insertionSort, it is:\n");
	printFloatArray(arrayOfFloats, size);

	//define array of Struct Cats for InsertionSort
	
	struct Cat whiskers = {.age = rand(), .name = "Whiskers"};
	struct Cat peter = {.age = rand(), .name = "Peter"};
	struct Cat mittens = {.age = rand(), .name = "Mittens"};
	struct Cat catniss = {.age = rand(), .name = "Catniss"};
	struct Cat caterine = {.age = rand(), .name = "Caterine"};	
	struct Cat arrayOfCats[] = {whiskers, peter, mittens, catniss, caterine};
	
	//Print Original array of Struct Cats
	printf("Originally, the array of Struct Cats is:\n");
	printStructArray(arrayOfCats, size);
	
	//Sort
	catInsertionSort(arrayOfCats, size);
	
	//Print New array of Struct Cats
	printf("After insertionSort, it is:\n");
	printStructArray(arrayOfCats, size);
}