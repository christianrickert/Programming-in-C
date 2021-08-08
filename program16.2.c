// Program to echo characters until an end of line
// example usage: "./a.out < program16.1.c"
#include <stdio.h>

int main(void)
{
    int c;

    while ( (c = getchar()) != EOF )
        putchar(c);

    return 0;
}