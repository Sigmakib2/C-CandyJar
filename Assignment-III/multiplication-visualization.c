/*
write a program to demo the process of multiplication. The program should ask
the user to enter two digit integers and print the product to integers as shown
below:
                45
        X       37
-------------------------
(45X7)         315
(45X3)        1350
-------------------------
              1665

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, i, int_p, multipy = 1, sum = 0, abcd;
    printf("Enter the two number: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    int n = 1 + (int)log10(num2);

    printf("\t\t%d\n", num1);
    printf("\tX\t%d\n", num2);
    printf("-------------------------\n");

    for (i = 0; i < n; i++)
    {
        int_p = (int)num2 % 10;
        num2 = num2 - int_p;
        num2 = num2 / 10;
        if (i != 0)
        {
            multipy = multipy * 10;
        }
        sum = sum + num1 * int_p * multipy;
        printf("(%dX%d)\t%d\n", num1, int_p, num1 * int_p * multipy);
    }
    printf("-------------------------\n");
    printf("\t\t%d\n", sum);
    return 0;
}