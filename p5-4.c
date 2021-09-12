#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, number, triangularNumber;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;

    for ( n = 1; n <= number; ++n) {
        triangularNumber += n;
    }

    printf("Triangluar number of %i is %i.\n", number, triangularNumber);
    
    return 0;
}
