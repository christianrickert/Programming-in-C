// Sort function for three integers without array usage

#include <stdio.h>

struct linkedInt  // doubly linked list to hold the sorted integers
{
  int value;
  struct linkedInt *prev;
  struct linkedInt *next;
};

void sort3(int *a, int *b, int *c, struct linkedInt *left)
{
  int temp;
  struct linkedInt *right;

  while ( left != (struct linkedInt *) 0 )  // left list element
  {
    right = left->next;
    while ( right != (struct linkedInt *) 0 )  // right list element
    {
      if ( left->value > right->value )  // compare list elements
      {
        temp = left->value;
        left->value = right->value;
        right->value = temp;
      }
      right = right->next;
    }
    left = left->next;
  }
}

int main(int argc, char const *argv[])
{
  // declare prototype functions
  void sort3(int *a, int *b, int *c, struct linkedInt *ptr);

  // initialize variables
  int f = 12, s = 42, t = 6;  // 1st, 2nd, and 3rd integer
  struct linkedInt i1, i2, i3;
  struct linkedInt *linkedIntPtr = &i1;

  // link list elements
  i1.value = f;
  i1.prev = (struct linkedInt *) 1;  // start of linked list
  i1.next = &i2;

  i2.value = s;
  i2.prev = &i1;
  i2.next = &i3;

  i3.value = t;
  i3.prev = &i2;
  i3.next = (struct linkedInt *) 0;  // end of linked list

  // print list elements before sorting
  while ( linkedIntPtr != (struct linkedInt *) 0 )
  {
    printf("%i\n", linkedIntPtr->value);
    linkedIntPtr = linkedIntPtr->next;
  }
  printf("--\n");

  // sort list elements
  linkedIntPtr = &i1;  // reset pointer
  sort3(&f, &s, &t, linkedIntPtr);

  // print list elements after sorting
  while ( linkedIntPtr != (struct linkedInt *) 0 )
  {
    printf("%i\n", linkedIntPtr->value);
    linkedIntPtr = linkedIntPtr->next;
  }

  return 0;
}