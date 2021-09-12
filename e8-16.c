// Program to convert a positive integer to another base

#include <stdio.h>

int convertedNumber[64];
long int numberToConvert, answer;
int base;
int digit = 0;

void getNumberAndBase(void)
{
    printf("Number to be converted: ");
    scanf("%li", &numberToConvert);
    answer = numberToConvert;

    do
    {
        printf("Base must be between 2 and 16: ");
        scanf("%i", &base);
    } while ( base < 2 || base > 16 );

}

void convertNubmer(void)
{
    do
    {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    }
    while ( numberToConvert != 0 );
}

void displayConvertedNumber(void)
{
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                                 'A', 'B', 'C', 'D', 'E', 'F',};
    int nextDigit;

    printf("convertedNumber = ");

    for (--digit; digit >= 0; --digit)
    {
        nextDigit = convertedNumber[digit];
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    void getNumberAndBase(void), convertNumber(void), displayConvertedNumber(void);

    do
    {
        getNumberAndBase();
        convertNubmer();
        displayConvertedNumber();
    }
    while ( answer != 0 );

    return 0;
}
