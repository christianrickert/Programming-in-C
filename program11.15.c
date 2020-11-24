// Function to count the characteristics in a string - Pointer version

#include <stdio.h>

int stringLength(const char *string)
{
    const char *cptr = string;

    while ( *cptr )
        ++cptr;

    return cptr - string;
}

int main(int argc, char const *argv[])
{
    int stringLength(const char *string);

    printf("%i  ", stringLength("stringLength test"));
    printf("%i  ", stringLength(""));
    printf("%i\n", stringLength("complete"));

    return 0;
}

