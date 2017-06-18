/*
Pablo Najera
Assignment 1
This file contains the functions for running selection sort
on arrays of ints, floats, and a struct Cat
*/

#include "cat.h"

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