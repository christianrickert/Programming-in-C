// Function to convert a string to a float, including negative numbers

#include <stdio.h>

float strToFloat(const char string[])
{
    int i, intValue, c, d, result = 0, sign;
    float decimal = 1, returnValue;
    sign = (string[0] == '-') ? -1 : 1;  // account for minus sign

    for (i = (sign == -1) ? 1 : 0; (string[i] >= '0' && string[i] <= '9') ||
                                    string[i] == '.'; ++i)
    {
        if (string[i] == '.')  // relative position of decimal point
            d = i;
        else
        {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
        }
    }

    // calculate precision
    d = i - d - 1;
    for (c = 0; c < d; ++c)
    {
        decimal *= 10.0;
    }

    returnValue = (float)sign * (float)result / (float)decimal;
    return returnValue;
}

int main(int argc, char const *argv[])
{
    float strToFloat(const char string[]);

    printf("%f\n", strToFloat("245"));
    printf("%0.4f\n", strToFloat("245.1234"));
    printf("%0.4f\n", strToFloat("-867.6921"));

    return 0;
}
