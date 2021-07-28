/*  Write a macro IS_UPPER_CASE that give a nonzero value,
    if a character is an uppercase letter                   */

#include <stdio.h>

#define IS_UPPER_CASE(c) ( (c) >= 'A' && (c) <= 'Z' ) ? (int) (c) : 0

int main(int argc, char const *argv[])
{
    printf("%i\n", IS_UPPER_CASE('a'));
    printf("%i\n", IS_UPPER_CASE('A'));
    printf("%i\n", IS_UPPER_CASE('z'));
    printf("%i\n", IS_UPPER_CASE('Z'));
    printf("%i\n", IS_UPPER_CASE('?'));
    return 0;
}
