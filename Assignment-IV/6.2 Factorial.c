/*
The factorial of an integer m is the product of consecutive integers from 1 to m. That is,
Factorial m = m! = m*(m-1)*....*1
*/
#include <stdio.h>
int main() {
    int n, i=1, fact = 1;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Negative number not allowed");
    else {
        for (i; i <= n; ++i) {
            fact *= i;
        }
        printf("Result %d! = %d", n, fact);
    }

    return 0;
}