//   Louis Ciotti
//   Copyright 2023
//   This program will convert the number of minutes entered 
//   by the user and convert them to YEARS and DAYS
//

#include<stdio.h>
#include<stdlib.h>


int main (void){

    // initialize variables
    long int minutes = 0;
    double days = 0;
    double years =0;
    double minInDay = (60*60*24);
    double minInYear = (minInDay * 365);

    // Get user input of minutes
    printf("Enter number of minutes to be converted: ");
    scanf("%ld", &minutes);

    // Calculate Results
    days = minutes/minInDay;
    years = minutes/minInYear;

    // Print Results
    
    printf("\nNumber of minutes in a day: %.0f\n", minInDay);
    printf("Number of minutes in a year: %.0f\n", minInYear);
    printf("\n");
    printf("%ld minutes = %f days\n\n", minutes, days);
    printf("%ld minutes = %f years\n\n", minutes, years);
    printf("DONE!");

    return 0;
}