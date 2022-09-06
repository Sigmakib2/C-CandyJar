/*
A program using while loop to reverse the digits of a number.

*/
#include<stdio.h>
#include<conio.h>
main()
{
    long int inputNum,TempValue,ReverseNum,DigSap;
    printf("Enter Integer Number: ");
    scanf("%ld",&inputNum);
    TempValue=inputNum;
    ReverseNum=0;
    while(TempValue!=0)
    {
        DigSap=TempValue%10;
        TempValue=TempValue/10;
        ReverseNum=(ReverseNum*10)+DigSap;
    }
    printf("Rverse Version: %ld\n",ReverseNum);
    getch();
}