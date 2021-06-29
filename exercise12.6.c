/*
    Write a function called 'bitpat_search' that looks for the occurence of a
    specified pattern of bits inside an unsigned int. The function should take
    three arguments and should be called as shown:
    bitpat_search(source, pattern, n)
    The function searches the integer source, starting at the leftmost bit, to
    see if the rightmost n bits of pattern occur in source. If pattern is found,
    have the function return the nubmer of the bit at which the pattern begins,
    when the leftmost bit is bit number 0. If the pattern is not found, then
    have the function return -1.
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

unsigned int bit_test(unsigned int number, unsigned int bit)
{
    // We create a bitmask with an on bit at the test bit location:
    // Then we AND the number with our bit mask. The result will either
    // be greater than zero (bit on) or the result will be zero (bit off)
    unsigned int intsize = int_size();   // 32 bits, system dependent
    unsigned int bitmask = 0x0001u;     // minimum bit pattern, i.e. word

    bitmask <<= (intsize - bit - 1);    // shift 1 to test bit position

    if ( (number & bitmask) > 0 )
        return 1;
    else
        return 0;
}

unsigned int bitpat_search(unsigned int source, unsigned int pattern, unsigned int n)
{
    // We're going to make use of both the 'int_size' and the 'bit_test' functions:
    // Let's check both source and pattern bit-wise to see if we've got a full match.
    // However, we also have to check for short sources that cannot fit the pattern or
    // for values of n larger than 'int_size'.
    unsigned int intsize = int_size();
    unsigned int matched = 0;
    unsigned int result = -1;
    unsigned int search = 0x0u;

    // validate user input
    if ( source >= pattern && n > 0 && n <= intsize )
    {
        // slide the (full) pattern from left to right through the source
        for (int s = (intsize - n); result == -1 && s > 0; --s)
        {
            search = pattern << s;
            matched = 0;

            // compare source and pattern bit-wise from left to right
            for (int i = (intsize - s - 1), lim = i + n; i < lim; ++i)
            {
                if ( bit_test(source, i) == bit_test(search, i) )
                    matched += 1;   // count matching bits
            }

            if ( matched == n )     // compare number of matching bits with n
                result = s;
        }
    }

    return result;
}

int main(int argc, char const *argv[])
{
    unsigned int bit_test(unsigned int number, unsigned int bit);
    unsigned int int_size();
    unsigned int bitpat_search(unsigned int source, unsigned int pattern, unsigned int n);
    unsigned int source = 0xe1f4;   // 1110 0001 1111 0100
    unsigned int pattern = 0x5;     // 0101

    printf("%i\n", bitpat_search(source, pattern, 3));

    return 0;
}