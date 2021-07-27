// Write a macro MAX3 that gives the maximum of three values.
// Write a program to test the definition.

#include <stdio.h>

#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
#define MAX3(a, b, c) ( MAX(a, b) > (c) ? MAX(a, b) : (c) )

int main(int argc, char const *argv[])
{
    printf("%i\n", MAX3(1, 2, 3));

    return 0;
}