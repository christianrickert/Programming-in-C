/*
    Check macros for printout
    Two issues:  1.) "x ## n" joins two tokens, but x is not declared.
                           2.) the loop prints values from 0 .. 99.
*/

#include <stdio.h>

#define PRINTINT(var) printf(# var " = %i\n", var)  // previous definition
#define PRINTX(n) printf("%i\n", x ## n)  // for reference

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 100; ++i)
    {
        // this works
        PRINTINT(i);
        // this doesn't work
        // PRINTX(i);
    }

    return 0;
}