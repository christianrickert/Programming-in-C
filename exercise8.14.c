// Program to sort an array of integers into ascending order

#include <stdio.h>
#include <stdbool.h>

int array[16] = {  34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11 };

// sort algorithm to sort an array in ascending (true) or descending (false) order
void sort(int a[], int n, bool b)
{
    int i, j, temp;

    for (i = 0; i < (n - 1); ++i)
    {
        for (j = (i + 1); j < n; ++j)
        {
            if ( b )
            {
                if ( a[i] > a[j] )
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            else
            {
                if ( a[i] < a[j] )
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int i;
    bool b = true;  // ascending sort order
    void sort(int a[], int n, bool b);

    printf("The array before teh sort:\n");

    for (i = 0; i < 16; ++i)
        printf("%i ", array[i]);

    sort(array, 16, b);

    printf("\n\nThe array after the sort:\n");

    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }

    printf("\n");

    return 0;
}