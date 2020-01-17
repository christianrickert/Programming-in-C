#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, number, triangularNumber, counter;

    for (counter = 1; counter <= 5; ++counter){
        printf("What triangular number do you want? \n");
        scanf("%i", &number);

        for (n = 1; n <= number; ++n) {
            triangularNumber += n;
        }

        printf("The triangular number of %i is %i.\n\n", number, triangularNumber);
    }
    return 0;
}