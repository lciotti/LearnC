#include<stdio.h>

int main(void)
{
    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};

    enum company companyOne, companyTwo, companyThree;

    companyOne = Xerox;
    companyTwo = Google;
    companyThree = Ebay;

    printf("One: %d\n",companyOne);
    printf("Two: %d\n", companyTwo);
    printf("Three: %d\n", companyThree);

}