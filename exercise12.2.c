/* Program to determine whether the this system
   performs a arithmetic or logical right shift */

#include <stdio.h>

unsigned int isArithmeticRightShift(int number)
{
    unsigned int result;
    int shifted;

    /* If an arithmetical right shift is performed
       on a negative number (sign bit is 1), then
       0s are shifted in from the left to the right.
       The sign bit will therefore be inverted and
       the number become positive (sign bit is 0) */

    shifted = number >> 1;    // right shift by 1

    if ( shifted >= 0 )
        result = 1;
    else
        result = 0;

    return result;
}

int main(int argc, char const *argv[])
{
    int number = -0xffffffff;
    unsigned int isArithmeticRightShift(int number);

    if ( isArithmeticRightShift(number) )
        printf("System is performing arithmetic right shifts.");
    else
        printf("System is performing logical right shifts.");

    return 0;
}