// Test out system functions equivalent to the macros in exercises 6, 7, and 8.

#include <ctype.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\n");
    printf("IS_UPPER:\n");
    printf("%i\n", isupper('a'));
    printf("%i\n", isupper('A'));
    printf("%i\n", isupper('z'));
    printf("%i\n", isupper('Z'));
    printf("%i\n", isupper('?'));

    printf("\nIS_ALPHABETIC:\n");
    printf("%i\n", isalpha('a'));
    printf("%i\n", isalpha('A'));
    printf("%i\n", isalpha('z'));
    printf("%i\n", isalpha('Z'));
    printf("%i\n", isalpha('?'));

    printf("\nIS_DIGIT):\n");
    printf("%i\n", isdigit('a'));
    printf("%i\n", isdigit('A'));
    printf("%i\n", isdigit('1'));
    printf("%i\n", isdigit('?'));
    printf("\n");

    return 0;
}