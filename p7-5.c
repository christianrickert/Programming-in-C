#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array_values[10] = { 0, 1, 2, 3, 4, 5 };
    int i;

    for ( i = 5; i < 10; ++i)
        array_values[i] = i * i;

    for ( i = 0; i < 10; ++i )
        printf("array_values[%i] = %i\n", i, array_values[i]);

    return 0;
}
