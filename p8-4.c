// Function to calculate the nth triangular number

#include <stdio.h>

void calculateTriangularNumber(int n)
{
    int i, triangularNumber;

    for (i = 0; i <= n; ++i)
        triangularNumber += i;

    printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main(int argc, char const *argv[])
{
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);

    return 0;
}
