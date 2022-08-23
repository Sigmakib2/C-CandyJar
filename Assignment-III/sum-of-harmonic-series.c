/*
Write a program to determine and print the sum of following harmonic series for
given value of n:

1+1/2+1/3+……+1/n.

The value of n should be given interactively through the terminal.
*/

#include <stdio.h>
void main()
{
    int i, n;
    float s = 0.0;
    printf("Input the last number or value of 'n' : ");
    scanf("%d", &n);
    printf("\n\n");
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d + ", i);
            s += 1 / (float)i;
        }
        if (i == n)
        {
            printf("1/%d ", i);
            s += 1 / (float)i;
        }
    }
    printf("\nSum of Series upto %d is = %f \n", n, s);
}