/* program to reverse the digits of a number */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, right_digit;

    printf("Enter your number:\n");
    scanf("%i", &number);

    do
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    } while ( number != 0 );

    return 0;
}
