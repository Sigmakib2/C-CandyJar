/*
A program using for loop to reverse the digits of a number.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    long int inputNum,TempValue,ReverseNum,DigSap,t;
    printf("Enter Integer Number: ");
    scanf("%ld",&inputNum);
    TempValue=inputNum;
    ReverseNum=0;
    for(TempValue;TempValue!=0;TempValue=TempValue/10)
    //while(TempValue!=0)
    {
        DigSap=TempValue%10;
        //TempValue=TempValue/10;
        ReverseNum=(ReverseNum*10)+DigSap;
    }
    printf("Rverse Version: %ld\n",ReverseNum);
    getch();
}