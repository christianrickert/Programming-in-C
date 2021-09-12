#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Please enter the two integer values, separated by a space: \n");
    scanf("%i %i", &a, &b);

    if ( a % b == 0 )
        printf("Integer %i is evenly divisible by %i.\n", a, b);
    else
        printf("Integer %i is not evenly divisible by %i.\n", a, b);

    return 0;
}
