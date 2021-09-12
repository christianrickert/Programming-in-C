#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 256;
    int j = 7;
    int next;

    next  = i;
    next += j;
    next -= i % j;
    
    printf("The next largest even multiple for %i given %i is %i.\n", i, j, next);

    return 0;
}
