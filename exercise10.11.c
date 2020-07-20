// Function to convert a string to an integer, including negative numbers

#include <stdio.h>

int strToInt(const char string[])
{
    int i, intValue, result = 0, sign;
    sign = (string[0] == '-') ? -1 : 1;

    for (i = (sign == -1) ? 1 : 0; string[i] >= '0' && string[i] <= '9'; ++i)
    {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    return sign * result;
}

int main(int argc, char const *argv[])
{
    int strToInt(const char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("-245"));

    return 0;
}
