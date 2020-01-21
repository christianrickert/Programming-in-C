#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c;

    printf("Please enter the two integer values, separated by a space: \n");
    scanf("%f %f", &a, &b);

    if ( b == 0 )
        printf("User asked for a division by zero.\n");
    else
        printf("Division of %g by %g yields %.3g .\n", a, b, a/b);

    return 0;
}