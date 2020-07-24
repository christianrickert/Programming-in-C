#include <stdio.h>

// Function returns number of digits (including minus sign)
int intDigits(int intVal)
{
    int digs = 0;

    if (intVal < 0)  // space for minus sign
        digs += 1;

    while (intVal != 0)
    {
        intVal /= 10;  // integer division
        digs += 1;
    }

    return digs;
}

// Function converts an integer value to a numerical string
void intToString(int intVal, int digs, char strVal[])
{
    int i, j = digs, n = digs + 1;

    if (intVal < 0)
    {
        intVal *= -1;  // absolute value
        strVal[0] = '-';
        i = 0;
    }
    else
        i = -1;

    for (j = digs - 1; j > i; --j)  // reverse order
    {
        strVal[j] = intVal % 10 + '0';  // int value of '0' is 48
        printf("j: %i, c: %c\n", j, strVal[j]);
        intVal /= 10;
    }
    strVal[n] = '\0';
}

int main(int argc, char const *argv[])
{
    int intDigits(int intVal);
    void intToString(int intVal, int digs, char strVal[]);
    int intVal = -12345;
    int digs = intDigits(intVal);
    char strVal[digs + 1];

    intToString(intVal, digs, strVal);
    printf("%s\n", strVal);

    return 0;
}