#include <stdio.h>

int main(int argc, char const *argv[])
{
    float celsius, fahrenheit = 27;

    celsius = (fahrenheit - 32) / 1.8;

    printf("%g degrees fahrenheit is %g degrees celsius.\n", fahrenheit, celsius);
    return 0;
}
