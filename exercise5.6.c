/*  program to generate and display a table of n and n^2
    for integer values in the range of 1 to 10           */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1, b = 0;

    printf(" n   |   n^2\n");
    printf("-----|-------\n");

    while ( a < 10) {
        b = a * a;
        printf("%-2i   |   %2i\n", a, b);
        a++;
    }
    return 0;
}