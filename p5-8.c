/* program to reverse the digits of a number */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, right_digit;

    printf("Enter your number:\n");
    scanf("%i", &number);

    while ( number != 0) {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }

    return 0;
}
