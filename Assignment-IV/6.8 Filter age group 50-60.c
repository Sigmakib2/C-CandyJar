/*
A program to read the age of 100 persons and count the number of persons in the
age group 50 to 60.

*/
//program according to the problem
/*
---------------------------------------------
#include<conio.h>
#include<stdio.h>
void main()
{
    int i,age,sap=0;
    for(i=1; i<=100; i++)
    {
        printf("Enter the age of the person-%d:",i);
        scanf("%d",&age);
        if (age>=50 && age<=60)
            sap=sap+1;
    }
    printf("The number of persons in the age group 50 to 60 are : %d",sap);
    getch();
}
-----------------------------------------------
*/
//For testing
#include<conio.h>
#include<stdio.h>
void main()
{
    int i,age,sap=0;
    for(i=1; i<=10; i++)
    {
        printf("Enter the age of the person-%d:",i);
        scanf("%d",&age);
        if (age>=50 && age<=60)
            sap=sap+1;
    }
    printf("The number of persons in the age group 50 to 60 are : %d",sap);
    getch();
}