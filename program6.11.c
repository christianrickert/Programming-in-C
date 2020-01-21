// Program to generate a table of prime numbers (Ver. 2)

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int p, d;
    bool isPrime;

    for ( p = 2; p <= 50; ++p ) {
        isPrime = true;

        for ( d = 2; d < p; ++d ) {
            if ( p % d == 0 )
                isPrime = false;
        }

        if ( isPrime != false ) {
            printf("%i ", p);
        }
    }

    printf("\n");
    return 0;
}