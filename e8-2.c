// Function to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;

    for (i = 0; i <= n; ++i)
        triangularNumber += i;

    return triangularNumber;
}

int main(int argc, char const *argv[])
{
    int calculateTriangularNumber(int), counter, number;
    for (counter = 1; counter <= 5; ++counter){
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        printf("\nThe triangular number of %i is %i.\n\n", number, calculateTriangularNumber(number));
    }
    return 0;
}
