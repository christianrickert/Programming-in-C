// given the following variable declarations

float           f = 1.00;
short int    i  = 100;
long int     l  = 500L;
double      d = 15.00;

// and the seven steps outlined in this chapter for conversion
// of operands in expressions, determine the type of the
// following expressions:

/* The short version of the seven steps:
    1. The decimal PRECISION is preserved
        long double > double > float
    2. Special types are CONVERTED to int
         (int) [_Bool, char, short int, bit field enum]
    3. The RANGE of values is preserved
         lon long int > long int > int
*/

int main(int argc, char const *argv[])
{
    double r = 0;

    r = f + i;                     // float + int = float
    r = l / d;                    // long int / double = double
    r = i / l + f;                // (int / long int) + float = float
    r = l * i;                     // long int * int = long int
    r = f / 2;                    // float / int = float
    r = i / (d + 2.0);         // int / (double + float) = double
    r = l + i / (double) l; // long int + (int / double) = double

    return 0;
}