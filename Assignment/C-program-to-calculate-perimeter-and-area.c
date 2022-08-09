/*
Problem scenario: point on the circle circumference is (4,5), center (0,0)
Final task: C program to calculate perimeter and area
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>

#define PI 3.1416
int main()
{
    float x1=0,y1=0,x2=4,y2=5,d,P,A;
    d = sqrt(abs(pow((x1-x2), 2) + pow((y1-y2), 2)));

    P = 2*PI*d;
    printf("perimeter of a circle: %.3f\n", P);

    A = PI*d*d;
    printf("Area of a circle: %.3f\n", A);

    return 0;
}
