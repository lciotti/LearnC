//  Louis Ciotti
//  Copyright 2023
//  
//  This program will get the size of various datatypes
//  

#include<stdio.h>


int main (void)
{
    // set up variables
    int result = 0;

    // display results

    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of long: %lu\n", sizeof(long));
    printf("Size of long long: %lu\n", sizeof(long long));
    printf("Size of double: %lu\n", sizeof(double));
    printf("Size of loing double: %lu\n", sizeof(long double));

}