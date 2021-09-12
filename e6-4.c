// Simple printing calculator

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char c;         // command
    float i, m = 0; // input, memory
    bool l = true;  // loop

    printf("Enter command and number:\n");

    while ( l == true ) {

        /* while in loops, scanf leaves a carriage return
           in its read buffer after the its first run,
           note the preceeding space character             */
        scanf(" %c %f", &c, &i);

        switch ( c ) {
            case '+':
                m += i;
                break;
            case '-':
                m -= i;
                break; 
            case '*':
                m *= i;
                break;
            case '/':
                if ( i != 0 )
                    m /= i;
                else
                    printf("Division by zero.\n");
                break;
            case 'S':
                m = i;
                break;
            case 'E':
                i = 0;
                l = false;
                break;
            default:
                printf("Invalid input.\n");
                break;
        }

    printf("Accumulator value is %g\n", m);
    }

    printf("End of calculations.\n");

    return 0;
}
