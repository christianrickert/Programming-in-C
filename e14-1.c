/* Define a type FunctionPtr (using 'typedef') that represents a pointer to a function
    that returns an 'int' and that takes no arguments. See p. 273 for implementation.

    To define a new type name with 'typedef', follow these steps:
    1. Write the statement as if a variable of the desired type were declared.
    2. Where the name of the declared variable would normally appear,
         substitude the new type name.
    3. In front of everything, place the keyword 'typedef'.
*/

#include <stdio.h>

int returnZero(void)
{
    return 0;
}

typedef int (*fnPtr)(void);  // define pointer, parenthesis required (not a pointer to an int)

int main(int argc, char const *argv[])
{
    int returnZero(void);  // prototype declaration
    fnPtr zPtr = returnZero;  // variable declaration

    printf("%i\n", zPtr());  // function call

    return 0;
}
