/* program to sum the digits of an integer */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, right_digit, sum;

    printf("Enter your number:\n");
    scanf("%i", &number);

    do
    {
        right_digit = number % 10;
        sum += right_digit;
        number = number / 10;
    } while ( number != 0 );

    printf("The sum of all digits of %i is %i\n", number, sum);
    
    return 0;
}