#include <stdio.h>

int main(int argc, char const *argv[])
{
    int values[10];
    int index;

    for (index = 0; index < 10; ++index)
    {
        values[index] = 0;
        printf("value[%i] = %i\n", index, values[index]);
    }

    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[5] / 10 ;
    --values[2];

    for (index = 0; index < 10; ++index)
    {
        printf("value[%i] = %i\n", index, values[index]);
    }

    return 0;
}
