/*  Write a macro IS_ALPHABETIC that gives a nonzero value,
    if a character is an alphabetic character.              */

#include <stdio.h>

#define IS_LOWER_CASE(c) ( (c) >= 'a' && (c) <= 'z' )
#define IS_UPPER_CASE(c) ( (c) >= 'A' && (c) <= 'Z' ) ? (int) (c) : 0
#define IS_ALPHABETIC(c) ( IS_LOWER_CASE((c)) || IS_UPPER_CASE((c)) )

int main(int argc, char const *argv[])
{
    printf("%i\n", IS_ALPHABETIC('a'));
    printf("%i\n", IS_ALPHABETIC('A'));
    printf("%i\n", IS_ALPHABETIC('z'));
    printf("%i\n", IS_ALPHABETIC('Z'));
    printf("%i\n", IS_ALPHABETIC('?'));
    return 0;
}
