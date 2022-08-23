/*
The straight line method of computing the yearly depreciation of the value of an
item is given by:

Depreciation = (Purchase price- Salvage Value)/Years of Service

Write a Program to determine the salvage value of an item when the purchase price,
years of service and the annual depreciation are given.
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    float Dep, Year_Ser, Pur_Price, Sal_Price;
    printf("Enter Deperaciation, Year of Service, Purchase price\n");
    scanf("%f%f%f", &Dep, &Year_Ser, &Pur_Price);
    Sal_Price = Pur_Price - (Dep * Year_Ser);
    printf("The salvage value of an item = %f ", Sal_Price);
    getch();
}
