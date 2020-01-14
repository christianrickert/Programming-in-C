#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, triangularNumber;

    triangularNumber = 0;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n     Sum from 1 to n\n");
    printf("---    ---------------\n");

    for ( n = 1; n <= 10; n = n + 1) {
        triangularNumber += n;
        printf("%i               %i\n", n, triangularNumber);
    }

    return 0;
}