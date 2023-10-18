//  Louis Ciotti
//  Copyright 2023
//
//  if-then demoprogram
//
//  Gets a number from user and then checks if it is even or odd
//  by dividing by two and seeing if there is a remainder

#include<stdio.h>
#include<string.h>

int main(void)
{
    int number_to_test, remainder;
    _Bool loop=0;
    char again='n';

    while(loop==0)
    {
        printf("\n");
        printf("** Odd/Even Checker **\n\n");

        printf("Enter a number to be tested: ");
        scanf("%i", &number_to_test);

        remainder = number_to_test % 2;

        if (remainder == 0)
            printf("The number is EVEN.\n");
        else
            printf("The number is ODD.\n");
        

        printf("Run again? ");
        fflush(stdin);
        scanf("%c", &again);
        
        
        if (again=='N' | again=='n')
            loop=1;
        else
            loop=0;
    }

    return 0;
}
