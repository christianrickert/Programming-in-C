/* This program substracts an integer value from another integer value
   and displays the results                                            */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declare variables
    int diff, val1, val2;

    // Assign values and calculate their sum
    val1 = 87;
    val2 = 15;
    diff = val1 - val2;

    // Display the result
    printf("The difference of %i and %i is %i\n", val1, val2, diff);
    
    return 0;
}
