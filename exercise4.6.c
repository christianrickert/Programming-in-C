#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x = 2.55, result;

    result = 3 * x * x * x - 5 * x * x + 6;

    printf("The result of the formula: 3x^3 - 5x^2 + 6 with x: %g is: %g.\n", x, result);

    return 0;
}