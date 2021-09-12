#include <stdio.h>

// Function to calculate the absolute value of a number
double absoluteValue(double x)
{
    if ( x < 0)
        x = -x;
    return (x);
}

// Function to calculate the square root of a number
double squareRoot(double x, double epsilon)
{
    double guess = 1.0;

    while ( (absoluteValue(1.0 - guess*guess/x)) >= epsilon )
    {
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;
}

int main(int argc, char const *argv[])
{
    double epsilon = 1E-12;
    double squareRoot(double x, double epsilon);
    printf("squareRoot (2.0) = %f\n", squareRoot(2.0, epsilon));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0, epsilon));
    printf("squareRoot 17.5) = %f\n", squareRoot(17.5, epsilon));
    return 0;
}
