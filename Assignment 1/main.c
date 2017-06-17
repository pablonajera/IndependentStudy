/*
Write functions for implementing sorting algorithms on an array (Insertion Sort, Selection Sort and Quick Sort).
Do this for an array of ints, an array of floats and an array of structs.

Also make a driver program that runs tests and prints results.
    -Ex: for an array containing [1,7,2,9,3] the ouput would be
    "The first array is 1,7,2,9,3 and after sorting it is 1,2,3,7,9
*/

#include <stdio.h>
#include "driverInsertionSort.h"
#include "driverSelectionSort.h"
#include "driverQuickSort.h"

int main(int argc, char* argv[]){
	runInsertion();
	runSelection();
	runQuick();
}