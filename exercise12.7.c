/*  Write a function called 'bitpat_get' to extract a specified set of bits.
    Have it take 3 arguments: the first an unsigned int, the second an integer
    starting bit nubmer, and the third a bit count. The bit numbering starts
    at 0 with the leftmost bit.
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

// Function to rotate an unsigned int left or right
unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits, intsize = int_size();

    // scale down the shift count ot a defined range
    if ( n > 0 )
        n = n % intsize;
    else
        n = -(-n % intsize);

    if ( n == 0 )
        result = value;
    else if ( n > 0 )
    {   // left rotate
        bits = value >> (intsize - n);
        result = value << n | bits;
    }
    else
    {   // right rotate
        n = -n;
        bits = value << (intsize - n);
        result = value >> n | bits;
    }

    return result;
}

unsigned int bitpat_get(unsigned int source, int start, unsigned int count)
{
    // We're going to make use of both the 'int_size' and the 'rotate' function:
    // First, we're going to "truncate" the source pattern by shifting all bits
    // to the right and then rotate the bits to the left, until the pattern
    // is fully right-aligned. This works because the bits filled in from the
    // right are guaranteed to be zeros (in contrast to the bits filled in
    // from the left, which are system-dependent either ones or zeros).
    unsigned int intsize = int_size(), result = -1;

    if ( count > 0 && (start + count) < intsize )
    {
        result = source >> (intsize - (start + count)); // truncate pattern on the right
        result = rotate(result, intsize);               // rotate pattern to right-align
    }

    return result;
}

int main(int argc, char const *argv[])
{
    unsigned int int_size();
    unsigned int bitpat_get(unsigned int source, int start, unsigned int count);
    unsigned int number = 0xabcdef00u;          // 1010 1011 1100 1101 1110 1111 0000 0000
    printf("%x\n", number);
    printf("%x\n", bitpat_get(number, 0, 12));  // 0000 0000 0000 0000 0000 1010 1011 1100

    return 0;
}