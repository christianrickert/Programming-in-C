// Program to sort an array of integers into ascending order,
// demonstrating exclusive use of pointers in the sort function

#include <stdio.h>

void sort(int *a, int n)
{
  int *l = a, *r, t;
  int * const ae = a + n;  // end of array

  for ( ; l < ae; ++l)  // iterate from first to last element
  {
    for (r = (l + 1); r < ae; ++r)  // iterate from second to last element
    {
      if ( *l > *r )  // left value larger than right value
      {
         t = *l;  // store left value in temp
        *l = *r;  // swap left with right value
        *r = t;   // swap right with temp value
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  int i;
  int array[16] = {  34, -5, 6, 0, 12, 100, 56, 22,
                     44, -3, -9, 12, 17, 22, 6, 11 };
  void sort(int *a, int n);

  printf("The array before the sort:\n");

  for (i = 0; i < 16; ++i)
    printf("%i ", array[i]);

  sort(array, 16);

  printf("\n\nThe array after the sort:\n");

  for (i = 0; i < 16; ++i)
  {
    printf("%i ", array[i]);
  }

  printf("\n");

  return 0;
}
