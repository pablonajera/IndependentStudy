#include <stdio.h>
#include "cat.h"

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