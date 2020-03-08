#include <stdio.h>

long int x_to_the_n(int x, int n)
{
    int i;
    long int xn = x;

    for (i = 1; i < n; ++i)
    {
        xn *= x;
    }

    return xn;
}

int main(int argc, char const *argv[])
{
    long int x_to_the_n(int, int);

    printf("%i to the power of %i is %i.\n", 2, 4, x_to_the_n(2, 4));

    return 0;
}