/*
The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs.15. Write a
program to get these values from the user and display the prices as follows:

 *** LIST OF ITEMS***
   Item   Price
   Rice   Rs. 16.75
   Sugar  Rs. 15.00
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    float RicePrice, SugarPrice;
    printf("Enter the price of Rice:\n");
    scanf("%f", &RicePrice);
    printf("Enter the price of Sugar:\n");
    scanf("%f", &SugarPrice);

    printf("***LIST OF ITEMS***\n");
    printf("Item- - -Price\n");
    printf("Rice    Rs. %f\n", RicePrice);
    printf("Sugar   Rs. %f\n", SugarPrice);
    getch();
}