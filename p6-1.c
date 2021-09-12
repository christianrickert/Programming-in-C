// Program to calculate the absolute value of an integer

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Type in your number: \n");
    scanf("%i", &number);

    if ( number < 0 )
        number = -number;

    printf("The absolute value is %i.\n", number);

    return 0;
}
