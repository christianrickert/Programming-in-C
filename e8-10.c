#include <stdio.h>
#include <stdbool.h>

// function to check for primes
int prime(int n)
{
    int i;
    bool isPrime;
    
    isPrime = true;

    for ( i = 2; i < n; ++i ) {
        if ( n % i == 0 )
            isPrime = false;
    }

    if ( isPrime != false )
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    int prime(int);
    int number;

    while ( true )
    {
        printf("Enter number to check for prime: ");
        scanf("%i", &number);
        printf("Result: %i\n", prime(number));
    }

    return 0;
}
