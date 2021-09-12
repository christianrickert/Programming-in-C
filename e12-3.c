/*
    Write a function called 'int_size' that returns the number of bits
    contained in an int on your particular machine (hint: ~0 produces
    an integer that contains all 1s).
*/

#include <stdio.h>

unsigned int int_size()
{
    // count the left shifts of a zero for the rightmost bit
    // until we finally flip the sign bit to a positive value
    unsigned int result = 1;
    int value = ~0; // 1 .... (?) 1111
    value &= ~1;    // 1 .... (?) 1110

    while ( value < 0 )
    {
        value <<= 1;
        result += 1;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    unsigned int intsize = 0;
    intsize = sizeof(int) * 8;  // 8 bits per byte
    unsigned int int_size();

    printf("%i\n", intsize);
    printf("%i\n", int_size());

    return 0;
}
