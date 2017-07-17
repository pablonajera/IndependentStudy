/*
Pablo Najera
--------------------------------
Assignment 8 Instructions:

Read through the attached csv file and store the first name, last name,
and age of each legislator in an array of structs. Each line of the csv
file has the following format: "last_name,first_name,date_of_birth".
The struct will be defined as "legislator" and will contain an two strings
of size 50 (first and last name) and an int (age).

Details:
--Program gets age based on July 14, 2017 (the date this assignment was finished).
--I had to write the CSV file as none was provided, but I followed the formatting
  specified in the assignment details.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* const months[] = {"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};

struct legislator{
	char firstName[50];
	char lastName[50];
	int age;
};

int monthConversion(char *month);
int dateConversion(char *date);
void lineToLegislator(struct legislator *cong, char *line);
void printLegislator (struct legislator *cong, int serial);

int main(int argc, char *argv[]){
	//Open CSV file
	FILE* info = fopen("info.csv", "r");
	
	//define necessary variables
	char line[100];
	int serial = 1;
	struct legislator leggy = {.firstName = "", .lastName = "", .age = 0};
	
	//check for succesfully open file
	if (info != NULL) {
		//while there is a new line of maximum 100 characters
		while(fgets(line, 100, info)) {
			//print original line from file
			printf("Line #%i from CSV: %s", serial, line);
						
			//Pass struct and line to function
			lineToLegislator(&leggy, line);
			
			//print out struct information
			printLegislator(&leggy, serial);
			serial++;
		}
	} 
	//close file
	fclose(info);
	return 0;
}

int monthConversion(char *month){
	/*return the month index that
	matches given month*/
	int i;
	for(i = 0; i < 11; i++){
		if (strcmp(month, months[i])){
			return i+1;
		}
	}
	return 0;
}

int dateConversion(char *date){
	int age = 0;
	
	//separate given line into month, date and year
	char* dateMem0 = strtok(date, "-");
	char* dateMem1 = strtok(NULL, "-");
	char* dateMem2 = strtok(NULL,"");
	int month = monthConversion(dateMem1);
	
	//Increment age for every year since birth year
	age = 2017 - atoi(dateMem2);
	
	//Decrement age if birthday hasn't passed
	if (month < 6){
		age -= 1;
	}
	else if (month == 6){
		if (atoi(dateMem0) < 14){
			age -= 1;
		}
	}
	
	return age;
}

void lineToLegislator(struct legislator *cong, char *line){
	//separate line into fname, lname, and birthdate
	char* infoMem0 = strtok(line, ",");
	char* infoMem1 = strtok(NULL, ",");
	char* infoMem2 = strtok(NULL,",");
	
	//copy information into struct
	strcpy(cong -> lastName, infoMem0);
	strcpy(cong -> firstName, infoMem1);
	cong -> age = dateConversion(infoMem2);
}

void printLegislator (struct legislator *cong, int serial){
	//Pretty-print struct information
	printf("Legislator #%i is: %s %s, %i years old\n\n",
		serial, cong -> firstName, cong -> lastName, cong -> age);
}