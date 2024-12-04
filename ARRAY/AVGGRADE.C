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
	float gradeSum = 0;

	// Instructions

	system("cls");
	printf("\n\n\n");
	printf("This program will calculate the average of 10 grades\n");
	printf("All grades must be between 0 and 100\n");
	printf("\n\n");

	// get user input of grades
	printf("Please enter grades\n");

	for(gradeNum = 0; gradeNum <= 9; gradeNum++)
	{
		printf("Enter grade number %i: ", gradeNum+1);
		scanf(" %f", &grades[gradeNum]);

		if (grades[gradeNum] < 0 || grades[gradeNum] > 100)
		{
			printf("\n\nPlease enter grade between 0 and 100\n\n");
			gradeNum--;
		}
	}

	// Calculate sum of grades then the average. Display results

	for(gradeNum = 0; gradeNum <= 9; gradeNum++)
	{
		gradeSum += grades[gradeNum];
	}

	average = gradeSum / 10;

	printf("\n\nGrades Entered:\n\n\t");
	for(gradeNum = 0; gradeNum <= 9; gradeNum++)
	{
		printf("%.2f  ",grades[gradeNum]);
	}
	printf("\n\n\tAverage: %.2f",average);
	printf("\n\nEnd of Program");
	getchar();

	return 0;
}
