/* Program to spell out integers digit for digit */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int decade, number, reversed_number, right_digit, sign, temp;

    // read the number
    printf("Enter an integer number: \n");
    scanf("%i", &number);

    // determine sign of number
    sign = ( number >= 0 ) ? 1 : -1;

    // determine the highest decade in number
    decade = 1;
    temp = number;
    do {
        decade *= 10;
        temp /= 10;
    } while ( temp != 0 );
    decade /= 10;

    // reverse the digits from number
    reversed_number = 0;
    if ( sign == -1 )
        number *= sign;
    do {
        right_digit = number % 10;
        reversed_number += decade * right_digit;
        decade /= 10;
        number /= 10;
    } while ( number != 0 );

    // spell out reversed digits
    if ( sign == -1 )
        printf("minus ");
    do {
        right_digit = reversed_number % 10;
        reversed_number /= 10;
        switch ( right_digit ) {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }

    } while ( reversed_number != 0 );

    return 0;
}
