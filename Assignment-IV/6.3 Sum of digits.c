/*
A program to compute the sum of the digits of a given number
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int inputNum,TempVar,Sum,DigSap;
    printf("Enter a number: ");
    scanf("%d",&inputNum);
    TempVar=inputNum;
    Sum=0;
    while(TempVar!=0)
    {
        DigSap=TempVar%10;
        TempVar=TempVar/10;
        Sum=Sum+DigSap;
    }
    printf("Sum of Number %d is %d\n",inputNum,Sum);
    getch();
}