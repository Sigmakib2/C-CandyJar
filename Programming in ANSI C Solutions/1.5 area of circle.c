/*
Given the radius of a circle, write a program 
to compute and display its area. Use a symbolic 
constant to define the π value and assume a suitable value for the radius.
*/
#include <stdio.h>
#include <conio.h>
#define PIE 3.14
int main()
{
    float Rad, Area;
    Rad = 4;
    Area = PIE * Rad * Rad;
    printf("Area of a circle is--> %f", Area);
    getch();
}