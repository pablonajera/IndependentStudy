/*
/*
Pablo Najera
Assignment 1

This file is the main function which calls
each of the driver functions
*/

#include "driverInsertionSort.h"
#include "driverSelectionSort.h"
#include "driverQuickSort.h"

int main(int argc, char* argv[]){
	runInsertion();
	runSelection();
	runQuick();
}