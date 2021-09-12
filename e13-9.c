/* write a macro ABSOLUTE_VALUE that computes the absolute value
    of its argument. Make certain that an expression such as (x + delta)
    is properly evaluated by the macro.
*/

#include <stdio.h>

#define ABSOLUTE_VALUE(c) ( (c) >=  0 ? (c) : -(c) )

int main(int argc, char const *argv[])
{
    printf("%i\n", ABSOLUTE_VALUE(-1));
    printf("%i\n", ABSOLUTE_VALUE(0));
    printf("%i\n", ABSOLUTE_VALUE(1));

    return 0;
}
