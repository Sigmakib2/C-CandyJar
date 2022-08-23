/*
Given an integer number, write a program that displays the number as follows:
First line: all digits
Second line: all except first digit
Third line: all except first two digits
……
Last line : The last digit.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int x, a, b, c;
    printf("Enter a four digit number: ");
    scanf("%d", &x);
    a = x % 1000;
    b = a % 100;
    c = b % 10;
    printf("%d\n", x);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    getch();
}