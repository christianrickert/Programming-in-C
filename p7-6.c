#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = { 'H', 'e', 'l', 'l', 'o', '!'};
    int i;

    for ( i = 0; i < 6; ++i ) {
        printf("%c", word[i]);
    }

    printf("\n");

    return 0;
}
