#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, pow;

    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n     2 to the n\n");
    printf("---   ------------\n");

    pow = 1;

    for ( n = 0; n <= 10; ++n)
    {
        printf("%2i         %i\n", n, pow);
        pow *= 2;
    }

    return 0;
}
