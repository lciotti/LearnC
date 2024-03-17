//  Louis Ciotti
//  Copyright 2023
//
//  if-then demoprogram
//
//  Gets a number from user and then checks if it is even or odd
//  by dividing by two and seeing if there is a remainder

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define baseRate  12.0
#define tax300  0.15
#define taxNext150  0.20
#define taxRemain 0.25
#define otThreshold 40 

int main(void)
{
    float hoursWorked;
    float otRate =baseRate * 1.5;
    float grossPay, taxes, netPay, otHours, baseHours;
    bool loop=0;
    char again='n';

    while(loop==0)
    {
        printf("\n");
        printf("** Weekly Pay **\n\n");

        printf("Enter hours worked: ");
        scanf("%g", &hoursWorked);
        
        if (hoursWorked > otThreshold) {
            otHours = hoursWorked - otThreshold;
            baseHours = otThreshold;
        }
        else {
            otHours = 0;
            baseHours = hoursWorked;
        }
        
        grossPay = (baseHours * baseRate) + (otHours * otRate);

        if (grossPay <= 300) {
            taxes = grossPay * tax300;
        }
        else if (grossPay > 300 & grossPay < 450)
        {
            taxes = (300 * tax300) + ((grossPay-300) * taxNext150);
        }
        else if (grossPay >= 450) {
            taxes = (300 * tax300) + (150 * taxNext150) + ((grossPay - 450) * taxRemain);
        }
        
        netPay = grossPay - taxes;
        printf("Gross Pay: %.2f\n", grossPay);
        printf("Taxes: %.2f\n", taxes);
        printf("Net Pay: %.2f\n", netPay);


        printf("Run again? ");
        fflush(stdin);
        scanf(" %c", &again);
        
        
        if (again=='N' | again=='n') {
            loop=1;
        }
        else {
            loop=0;
        }
    }

    return 0;
}