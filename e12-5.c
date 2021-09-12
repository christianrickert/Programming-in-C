/* Write a function call 'bit_test' that takes two arguments:
   an unsigned int and a bit number n. Have the function return
   a bit number of 1 if it is on (1) inside the word, and 0 if it is off (0).
   Assume that bit number 0 references the leftmost bit inside the integer.
   Also write a corresponding function called 'bit_set' that takes two
   arguments: an unsigned int and a bit number. Have the function return
   the result of turning bit n on inside the integer.
*/

#include <stdio.h>

unsigned int int_size()
{
    // count the left shifts of a zero for the rightmost bit
    // until we finally flip the sign bit to a positive value
    unsigned int result = 1;
    int value = ~0; // 1... (?) 1111
    value &= ~1;    // 1... (?) 1110

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

unsigned int bit_set(unsigned int number, unsigned int bit)
{
    // Same logic as with the "bit_test" function. But instead of using AND
    // with the number and the bit mask, we're going to return the result of
    // using the OR operator with the two bit patterns. In effect, the bit n
    // will either remain on or be turned on after the bit masking operation.
    unsigned int intsize = int_size();  // 32 bits, system dependent
    unsigned int bitmask = 0x0001u;     // minimum bit pattern, i.e. word

    bitmask <<= (intsize - bit - 1);    // shift 1 to set bit position

    return number | bitmask;
}

int main(int argc, char const *argv[])
{
    unsigned int int_size();
    unsigned int bit_test(unsigned int number, unsigned int bit);
    unsigned int bit_set(unsigned int number, unsigned int bit);
    unsigned int bit;
    unsigned int intsize = int_size();
    unsigned int number = 0x8CEF731u;
    char bitpattern[] = "0000 1000 1100 1110 1111 0111 0011 0001";

    for (int i = 0; i < intsize; ++i)
    {
        printf("bits #%i-%i: %s, bit #%2i: %s\n", 0, intsize - 1, bitpattern, i, bit_test(number, i) ? "on" : "off");
    }

    number = 0;
    for (int i = 1; i < intsize; ++i)
    {
        bit = intsize - i;
        printf("number: %i, with bit #%2i set to on: %i\n", number, bit, bit_set(number, bit));
    }

    return 0;
}
