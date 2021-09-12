/* Program to convert a positive integer to another base */
#include <stdio.h>

int main(int argc, char const *argv[]) {
    const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                                  'A', 'B', 'C', 'D', 'E', 'F' };
    char output;
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    // get the number and the base

    printf("Please enter the number to be converted: ");
    scanf("%ld", &numberToConvert);
    printf("Please enter the new base: ");
    scanf("%i", &base);

    // convert to the indicated base

    do {
        convertedNumber[index] = numberToConvert % base; ++index;
        numberToConvert /= base;
    } while ( numberToConvert != 0 );

    // display the results in reverse order

    printf("Converted number: ");

    for ( --index; index >= 0; --index ) {
        nextDigit = convertedNumber[index];
        output = baseDigits[nextDigit];
        printf("%c", output);
    }

    return 0;
}
