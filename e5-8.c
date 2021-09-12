#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, max, pow;

    printf("Please enter the number of triangular numbers: \n");
    scanf("%i", &max);
    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n     2 to the n\n");
    printf("---   ------------\n");

    pow = 1;

    for ( n = 0; n <= max; ++n)
    {
        printf("%2i         %i\n", n, pow);
        pow *= 2;
    }

    return 0;
}
