#include <stdio.h>

int main(int argc, char const *argv[]) {
    int i, numFibs;

    printf("How many Fibonacci numbers [1-75] do you want?: ");
    scanf("%i", &numFibs);

    if ( numFibs < 1 || numFibs > 75 ) {
        printf("Selection not in range [1-75], ending program.\n");
        return 1;
    }

    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0;  // by definition
    Fibonacci[1] = 1;  // ditto
    for ( i = 2; i < numFibs; ++i ) {
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }

    for ( i = 0; i < numFibs; ++i ) {
        printf("%2i. Number: %llu\n", i + 1, Fibonacci[i]);
    }

    return 0;
}
