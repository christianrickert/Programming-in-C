/* Program to evaluate simple expressions of the form
   value operator value                               */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float value1, value2;
    char operator;

    printf("Type in your expression: \n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch ( operator ) {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if ( value2 == 0 )
                printf("Division by zero.\n");
            else
                printf("%.2f\n", value1 / value2);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }

    return 0;
}
