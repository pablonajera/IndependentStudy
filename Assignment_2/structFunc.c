/*
Pablo Najera
June 28, 2017

Write a function which accepts an array of structs and pulls out the given member variable
of the given struct object in the array. The struct should have three int elements.
The function should take the array, an index i, and an enumerated type and return the value
of the item in that index of the array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dog {
	int height;
	int weight;
	int age;
};

void printStructMem (struct Dog dogs[], int index, int member);
void getDogName (char name[20], int i);
void getCharacteristic (char characteristic[20], int i);

int main (){
	//define dogs
	struct Dog spike = {.height = rand(), .weight = rand(), .age = rand()};
	struct Dog rex = {.height = rand(), .weight = rand(), .age = rand()};
	struct Dog spot = {.height = rand(), .weight = rand(), .age = rand()};
	struct Dog otie = {.height = rand(), .weight = rand(), .age = rand()};
	struct Dog goddard = {.height = rand(), .weight = rand(), .age = rand()};
	struct Dog chloe = {.height = rand(), .weight = rand(), .age = rand()};
	
	//fill array
	struct Dog dogs[] = {spike, rex, spot, otie, goddard, chloe};

	//let user choose index
	printf("Please choose a dog by typing its number:\
			\n1. Spike\n2. Rex\n3. Spot\n4. Otie\n5. goddard \
			\n6. Chloe\n\n");
	char indexChar;
	scanf(" %c", &indexChar);
	
	//convert Char to int
	char *ptr;
	int index;
	index = strtol(&indexChar, &ptr, 10);
	
	//get dog name
	char name[20] = "name";
	getDogName(name, index);
	printf("\nYou chose %s!\n", name);

	//make index usable with array
	index -= 1;
	
	//let user choose characteristic
	printf("Which of %s's characteristics would you like to know? Choose a number:\
			\n1. %s's height\n2. %s's weight\n3. %s's age\n\n" , name, name, name, name);
	char selectionChar;
	scanf(" %c", &selectionChar);
	
	//convert Char to int
	char *ptr2;
	int selection;
	selection = strtol(&selectionChar, &ptr, 10);
	printf("%d", selection);
	
	//get Characteristic
	char characteristic[20] = "none";
	getCharacteristic(characteristic, selection);
	printf("\n\nOk...\nGetting %s's %s!\n", name, characteristic);
	
	//reducing Selection for 0th program
	selection -=1;
	
	//print user's selected item
	printf("\n%s's %s is ", name, characteristic);
	printStructMem(dogs, index, selection);
	printf("!\n\n\n");
	
	return 1;
}

void printStructMem (struct Dog dogs[], int index, int member){
	//Get the address of the dog at given index
	struct Dog* dogPtr = &dogs[index];
	
	//get the address of first member int of struct
	int* memPtr = (int*)dogPtr;
	
	//get address of desired member
	int* desiredMemPtr = memPtr + member;
	
	//get int at address
	int memberToPrint = *desiredMemPtr;
	
	//print int
	printf("%d", memberToPrint);
}

void getDogName (char name[20], int i){
	switch(i) {
		case 1 :
			strcpy(name, "Spike");
			break;
		case 2 :
			strcpy(name, "Rex");
		case 3 :
			strcpy(name, "Spot");
			break;
		case 4 :
			strcpy(name, "Otie");
			break;
		case 5 :
			strcpy(name, "Goddard");
			break;
		case 6 :
			strcpy(name, "Chloe");
			break;
		default :
			strcpy(name,"Invalid Selection\n");
	}	 
}

void getCharacteristic (char characteristic[20], int i){
	switch(i) {
		case 1 :
			strcpy(characteristic, "height");
			break;
		case 2 :
			strcpy(characteristic, "weight");
			break;
		case 3 :
			strcpy(characteristic, "age");
			break;
		default :
			strcpy(characteristic,"Invalid Selection\n");
	}
}