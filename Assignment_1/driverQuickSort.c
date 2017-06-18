#include <stdlib.h>
#include "quickSort.h"
#include "printArray.h"


void runQuick(){
	printf("\n|||   QUICK SORT   |||\n\n");

	//Define array of Ints for QuickSort
	
	int arrayOfInts3[] = {rand(),rand(),rand(),rand(),rand()};;
	int size = sizeof(arrayOfInts3)/sizeof(arrayOfInts3[0]);


	//Print original arrayOfInts3
	printf("Originally, the arrayOfInts3 is:\n");
	printIntArray(arrayOfInts3, size);

	//Sort
	intQuicksort(arrayOfInts3, 0, size);

	//Print New arrayOfInts3
	printf("After quicksort, it is:\n");
	printIntArray(arrayOfInts3, size);

	//define array of Floats for QuickSort
	
	float arrayOfFloats3[] = {1.62,7.12,2.62,9.02,3.41};

	//Print original arrayOfFloats3
	printf("Originally, the arrayOfFloats3 is:\n");
	printFloatArray(arrayOfFloats3, size);

	//Sort
	floatQuicksort(arrayOfFloats3, 0, size-1);

	//Print New arrayOfFloats3
	printf("After quicksort, it is:\n");
	printFloatArray(arrayOfFloats3, size);
	
	//define array of Struct Cats for QuickSort
	
	struct Cat whiskers3 = {.age = rand(), .name = "Whiskers"};
	struct Cat peter3 = {.age = rand(), .name = "Peter"};
	struct Cat mittens3 = {.age = rand(), .name = "Mittens"};
	struct Cat catniss3 = {.age = rand(), .name = "Catniss"};
	struct Cat caterine3 = {.age = rand(), .name = "Caterine"};	
	struct Cat arrayOfCats3[] = {whiskers3, peter3, mittens3, catniss3, caterine3};
	
	//Print Original array of Struct Cats
	printf("Originally, the array of Struct Cats is:\n");
	printStructArray(arrayOfCats3, size);
	
	//Sort
	catQuicksort(arrayOfCats3, 0, size-1);
	
	//Print New array of Struct Cats
	printf("After quicksort, it is:\n");
	printStructArray(arrayOfCats3, size);
}
