/*  program to generate and display a table of triangular
    numbers for every fifth triangular number between
    5 and 50 using a special formula                      */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1, t = 0;

    printf(" n   |   n^2\n");
    printf("-----|--------\n");

    while ( n <= 50 ) {
        if ( n % 5 == 0 ) {
            t = n * (n + 1) / 2;
            printf("%2i   |  %4i\n", n, t); 
        }
        n++;
    }
    return 0;
}
