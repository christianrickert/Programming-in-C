/*  program to generate and display a table of factorials
    for numbers from 1 to 10                              */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1, t = 1, f = 1;

    printf("  n  |   n!\n");
    printf("-----|--------\n");

    while ( n <= 10 ) {
        while (t <= n) {
            f *= t;
            t++;
        }
        printf(" %2i  |%8i\n", n, f); 
        n++;
    }
    return 0;
}
