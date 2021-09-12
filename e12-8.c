/*  Write a function called 'bitpat_set' to set a specified set of bits
    to a particular value. The function should take four arguments:
    1.) A pointer to an unsigned in in which the specified bits are to be
    set. 2.) An unsigned int containing the value to which the specified
    bits are to be set, right-adjusted to the specified bits. 3.) An
    unsigned int that specifies the starting bit number (with the left-
    most bit numbered 0), and 4.) an unsigned int specifying the size of
    the field.
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

void bitpat_set(unsigned int *target, unsigned int field, int startbit, int targetsize)
{
    // We're going to use a mask to set all bits in target from the field -
    // starting from the startbit, for the number of bits in targetsize -
    // using a bit mask approach.
    //
    unsigned int intsize = int_size(), mask = 0x0u, shift = intsize - startbit - targetsize;

    if ( targetsize > 0 && shift < intsize )
    {
        // create a mask with all ones:     1111 .... (?) 1111
        mask = ~mask;
        // move in zeros from the right:    1111 .... (?) 0000
        mask <<= targetsize;
        // invert mask:                     0000 .... (?) 1111
        mask = ~mask;
        // shift mask to startbit:          0000 1111 (?) 0000
        mask <<= shift;
        // revert mask:                     1111 0000 (?) 1111
        mask = ~mask;
        // AND target with mask, zero out the masked bits in target
        *target &= mask;                //  0101 0000 (?) 0101

        // shift field to the left:         0000 0101 (?) 0000
        field <<= shift;
        // OR target with shifted field, transfer field bits to target
        *target |= field;               //  0101 0101 (?) 0101
    }
}

int main(int argc, char const *argv[])
{
    unsigned int int_size();
    void bitpat_set(unsigned int *target, unsigned int field, int startbit, int targetsize);
    unsigned int number = 0xabcdef01u;      // 1010 1011 1100 1101 1110 1111 0000 0001
    unsigned int pattern = 0x45u;
    printf("%x\n", number);
    bitpat_set(&number, pattern, 12, 8);    // 1010 1011 1100 0100 0101 1111 0000 0001
    printf("%x\n", number);
    bitpat_set(&number, 0x0u, 28, 4);       // 1010 1011 1100 0100 0101 1111 0000 0000
    printf("%x\n", number);
    bitpat_set(&number, 0x1u, 31, 1);       // 1010 1011 1100 0100 0101 1111 0000 0001
    printf("%x\n", number);

    return 0;
}
