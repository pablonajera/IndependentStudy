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
Program gets age based on July 11, 2017 (the date this assignment was done).
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

int monthConversion(char *month){
	int i;
	for(i = 0; i < 11; i++){
		if (month == months[i]){
			return i+1;
		}
	}
	return 0;
}


int dateConversion(char *date){
	int age = 0;
	char* dateMem0 = strtok(date, "-");
	char* dateMem1 = strtok(NULL, "-");
	char* dateMem2 = strtok(NULL,"");
	int month = monthConversion(dateMem1);
	
	age = 2017 - atoi(dateMem2);

	if (month < 6){
		age += 1;
	}
	else if (month == 6){
		if (atoi(dateMem0) < 11){
			age += 1;
		}
	}
	
	return age;
}

void lineToLegislator(struct legislator *cong, char *line){
	char* infoMem0 = strtok(line, "-");
	char* infoMem1 = strtok(NULL, "-");
	char* infoMem2 = strtok(NULL,"-");
	strcpy(cong -> lastName, infoMem0);
	strcpy(cong -> firstName, infoMem1);
	cong -> age = dateConversion(infoMem2);
}

int main(int argc, char *argv[]){
	FILE* info = fopen("info.csv", "r");
	char line[100];
	struct legislator leggy = {.firstName = "", .lastName = "", .age = 0};
	if (info != NULL) {
		while(fgets(line, 100, info)) {
			/*TODO: Remove trailing characters that cause seg faults
			printf("1: %s", line);
//			line[strlen(line) - 2] = 0;
			char* p = strchr(line, '\n');
			if (p != NULL) *p = '\0';
//			line2 = strchr(line, '\r');
			
			printf("yeet\n");
			printf("2: %s lol", line);
			lineToLegislator(&leggy, line);
			*/
			printf("%s",line);						
		}
	} 
	fclose(info);
	return 0;
}