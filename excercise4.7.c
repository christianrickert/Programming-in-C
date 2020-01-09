#include <stdio.h>

int main(int argc, char const *argv[])
{
    float result;

    result = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);

    printf("(3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8) = %g\n", result);

    return 0;
}