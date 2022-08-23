/*
Write a program to read and display the following table of data.

Name - - - Code - - - Price
-----------------------------
Fan     | 56       |  1200.00
-----------------------------
Motor   | 45       |  5000.00
-----------------------------

*/
#include <conio.h>
#include <stdio.h>
void main()
{
    char Name1[10], Name2[10];
    int Code1, Code2;
    float Price1, Price2;
    printf("Enter Name, Code and Price\n");
    scanf("%s%d%f", &Name1, &Code1, &Price1);
    printf("Enter Name, Code and Price\n");
    scanf("%s%d%f", &Name2, &Code2, &Price2);
    printf("Name - - - Code - - - Price\n");
    printf("-------------------------\n");
    printf("%-7s | %-8d | %8.2f\n", Name1, Code1, Price1);
    printf("-------------------------\n");
    printf("%-7s | %-8d | %8.2f\n", Name2, Code2, Price2);
    printf("-------------------------\n");
    getch();
}
