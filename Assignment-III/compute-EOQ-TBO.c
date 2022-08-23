/*
The straight line method of computing the yearly depreciation of the value of an
item is given by:

Depreciation = (Purchase price- Salvage Value)/Years of Service

Write a Program to determine the salvage value of an item when the purchase price,
years of service and the annual depreciation are given.
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float Dr, Sc, Hc;
    float TBO, EOQ;
    printf("Enter Demand Rate \n");
    scanf("%f\n", &Dr);
    printf("Enter Setup Cost \n");
    scanf("%f\n", &Sc);
    printf("Enter Holding Cost \n");
    scanf("%f\n", &Hc);
    EOQ = sqrt((2 * Dr * Sc) / Hc);
    TBO = sqrt((2 * Sc) / (Dr * Hc));
    printf("The 'Economic Order Quantity (EOQ)' is : %f\n", EOQ);
    printf("The 'Time Between Order (TBO)' is : %f", TBO);
    getch();
}
