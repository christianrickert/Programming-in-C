// Define a macro MIN that gives the minimum of two values.
// Then write a program to test the macro definition.

#include <stdio.h>

#define MIN(a, b) ( (a) <= (b) ? (a) : (b) )

int main(int argc, char const *argv[])
{
    printf("%i\n", MIN(1, 2));

    return 0;
}