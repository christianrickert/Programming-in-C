/* program to reverse the digits of a number */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, right_digit, sign;
    char last;

    printf("Enter your number:\n");
    scanf("%i", &number);

    if ( number < 0 )   // keep track of the sign
        sign = -1;
    else
        sign = 1;

    do
    {
        right_digit = sign * number % 10;
        printf("%i", right_digit);
        number = number / 10;
    } while ( number != 0 );

    last = ( sign < 0 ) ? '-' : ' ';
    printf("%c\n", last);

    return 0;
}