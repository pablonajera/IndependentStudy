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
For the age of the Cats, randomly generated numbers were used.
The cats were compared on basis on their member variable "age" (int)
*/

#include <stdio.h>
#include <stdlib.h>

struct Cat
{
	int age;
	char name[12];
};

void intInsertionSort (int array[], int size);
void floatInsertionSort (float array[], int size);
void catInsertionSort (struct Cat array[], int size);
void intSelectionSort(int array[], int size);
void floatSelectionSort(float array[], int size);
void catSelectionSort(struct Cat array[], int size);
void intQuicksort(int array[], int bottom, int top);
void floatQuicksort(float array[], int bottom, int top);
void catQuicksort(struct Cat array[], int bottom, int top);
void printIntArray(int array[], int size);
void printFloatArray(float array[], int size);
void printStructArray(struct Cat array[], int size);

int main(int argc, char *argv[]){
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
	


	printf("\n|||    SELECTION SORT   |||\n\n");

	//Define array of Ints for SelectionSort
	int arrayOfInts2[] = {rand(),rand(),rand(),rand(),rand()};;

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



	printf("\n|||   QUICK SORT   |||\n\n");

	//Define array of Ints for QuickSort
	
	int arrayOfInts3[] = {rand(),rand(),rand(),rand(),rand()};;

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
	float key;
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

void catInsertionSort (struct Cat array[], int size){
	struct Cat key;
	int i;
	int j;

	//loop through the array
	for (i = 0; i < size; i++ ){
		key = array[i];
		j = i-1;

		//move items greater than next item up
		while (j >= 0 && key.age < array[j].age){
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

void catSelectionSort (struct Cat array[], int size){
	int minimum;
	int i;
	int j;
	struct Cat temp; //for swap

	//loop throught the array
	for (i = 0; i < size; i++)
	{
	  	//set min
		minimum = i;

	    //find min in rest of array by comparing to min
		for (j = i + 1; j < size; j++)
			if (array[j].age < array[minimum].age)
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

void catQuicksort(struct Cat array[], int bottom, int top){
	int pivot;
	int i;
	int j;
	struct Cat temp;

	if (bottom < top) {
		pivot = bottom; // select a pivot element
		i = bottom;
		j = top;

		while (i < j) {

			//find a number toper than pivot
			while (array[i].age <= array[pivot].age && i <= top)
				i++;

			//find a bottomer number than pivot
			while (array[j].age > array[pivot].age && j >= bottom)
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
		catQuicksort(array, bottom, j-1);
		catQuicksort(array, j+1, top);
	}
}

void printIntArray(int array[], int size){
	int i;
	for (i = 0; i < size; i++){
		printf("	>%d\n", array[i]);
	}
	printf("\n");
}

void printFloatArray(float array[], int size){
	int i;
	for (i = 0; i < size; i++){
		printf("	>%f\n", array[i]);
	}
	printf("\n");
}

void printStructArray(struct Cat array[], int size){
	int i;
	for (i = 0; i < size; i++){
		printf("	>%s (age:%i)\n", array[i].name, array[i].age);
	}
	printf("\n");
}