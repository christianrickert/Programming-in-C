#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 150, array[n], i;

    // fill array with integers
    for (i = 0; i <= n; ++i)
        array[i] = i;

    // Sieve of Eratosthenes, basically:
    // remove multiples of incrementing primes,
    // start with the smallest known prime nubmer
    int p = 2;

    do {
        for (i = p + 1; i <= n; ++i)
        {
            if ( array[i] % p == 0 )
                array[i] = 0;
        }
        p++;
    } while ( p < n );

    for (i = 2; i <= n; ++i)
    {
        if ( array[i] != 0 )
            printf("%i ", array[i]);
    }

    return 0;
}
