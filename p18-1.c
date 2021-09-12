#include <stdio.h>
#define DEBUG

int process(int i, int j, int k)
{
    return i + j + k;
}

int main(void)
{
    int i, j, k, nread;

    nread = scanf("%d %d %d", &i, &j, &k);

    #ifdef DEBUG
        fprintf(stderr, "Number of integers read = %i\n", nread);
        fprintf(stderr, "i = %i, j = %i, k = %i", i, j, k);
    #endif

    printf("\n%i", process(i, j, k));  // typo in book

    return 0;
}
