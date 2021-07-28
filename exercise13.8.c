//  Write a macro IS_DIGIT that gives a nonzero value
//  if a character is a digit '0' through '9'.
//  Use this macro in the definition of another macro
//  IS_SPECIAL which gives a nonzero result if a
//  character is a special character (non-alphabetic
//  nor a digit).

#include <stdio.h>

#define IS_DIGIT(c)      ( (c) >= '0' && (c) <= '0' )
#define IS_LOWER_CASE(c) ( (c) >= 'a' && (c) <= 'z' )
#define IS_UPPER_CASE(c) ( (c) >= 'A' && (c) <= 'Z' )
#define IS_ALPHABETIC(c) ( IS_LOWER_CASE((c)) || IS_UPPER_CASE((c)) )
#define IS_SPECIAL(c)    ( !IS_ALPHABETIC((c)) && !IS_DIGIT((c)) )

int main(int argc, char const *argv[])
{
    printf("%i\n", IS_SPECIAL('a'));
    printf("%i\n", IS_SPECIAL('A'));
    printf("%i\n", IS_SPECIAL('z'));
    printf("%i\n", IS_SPECIAL('Z'));
    printf("%i\n", IS_SPECIAL('?'));
    return 0;
}