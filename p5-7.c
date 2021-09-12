/* program to find the greatest common divisor
   of two non-negative integer values          */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int u, v, t;

    printf("Please type in two non-negative integers: ");
    scanf ("%i%i", &u, &v);

    while (v != 0) {
        t = u % v;
        u = v;
        v = t;
    }

    printf("Their greatest common divisor is %i\n", u);

    return 0;
}
