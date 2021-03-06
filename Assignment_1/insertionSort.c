/*
Pablo Najera
Assignment 1
This file contains the functions for running insertion sort
on arrays of ints, floats, and a struct Cat
*/

#include "cat.h"

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