#include <stdio.h>

float arraySum(float a[], int n)
{
    int i;
    float sum = 0;

    for (i = 0; i < n; ++i)
    {
        sum += a[i];
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int num = 9;
    float array[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printf("Sum is %f.\n", arraySum(array, num));

    return 0;
}
