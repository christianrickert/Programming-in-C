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
    double epsilon = 1E-12, root1, root2;
    double squareRoot(double x, double epsilon);
    int a, b, c, d, x;

    // Formula: a*x^2 + b*x + c*1 = 0
    printf("Enter the value for a: "); scanf("%i", &a);
    printf("Enter the value for b: "); scanf("%i", &b);
    printf("Enter the value for c: "); scanf("%i", &c);

    d = b * b - 4 * c;  // discriminant

    if ( d < 0 )
    {
        printf("The roots of the equation are imaginary.\n");
        return 1;
    } else {
        // missing formula in book
        return 0;
    } 
}
