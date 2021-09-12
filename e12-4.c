// make the 'rotate' function in "program12.4.c" system-independent
// using the function 'int_size' from "exercise12.3.c"

#include <stdio.h>

int main(void)
{
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
    unsigned int int_size();
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    return 0;
}

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
