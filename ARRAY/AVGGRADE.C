//    Louis Ciotti
//    Copyright 2024
//    This program will generate the average grade for a given input
//    of 10 grades.
//

#include<stdio.h>
#include<stdlib.h>

int main(void){

	// Initialize Vaiables
	float grades[10];
	float average;
	int gradeNum;

	// Instructions
	printf("\n\n\n");
	printf("This program will calculate the average of 10 grades\n");
	printf("All grades must be between 0 and 100\n");
	printf("\n\n")

	// get user input of grades
	printf("Please enter grades\n");

	for(gradNum = 0; gradNum <= 9; gradNum++)
	{
		printf("Enter grade number %i", gradeNum+1