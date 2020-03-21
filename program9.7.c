// Program to illustrate structures and arrays

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    struct month
    {
        int numberOfDays;
        int name[3];
    };

    const struct month months[12] = { {31, {'J', 'A', 'N'} }, {28, {'F', 'E', 'B'} }, {31, {'M', 'A', 'R'} },
                                      {30, {'A', 'P', 'R'} }, {31, {'M', 'A', 'Y'} }, {30, {'J', 'U', 'N'} },
                                      {31, {'J', 'U', 'L'} }, {31, {'A', 'U', 'G'} }, {30, {'S', 'E', 'P'} },
                                      {31, {'O', 'C', 'T'} }, {30, {'N', 'O', 'V'} }, {31, {'D', 'E', 'C'} }, };

    printf("Month\tNumber of Days\n");
    printf("-----\t--------------\n");

    for (i = 0; i < 12; ++i )
    {
        printf(" %c%c%c\t       %i\n", months[i].name[0], months[i].name[1], months[i].name[2], months[i].numberOfDays);
    }

    return 0;
}