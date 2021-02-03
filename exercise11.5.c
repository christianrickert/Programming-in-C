// Create a doubly linked list and print out the elements of the list

#include <stdio.h>

struct entry
{
  int value;
  struct entry *prev;
  struct entry *next;
};

int main(int argc, char const *argv[])
{
  struct entry n0, n1, n2, n3, n4;
  struct entry *listPtr = &n0;

  n0.next = &n1;  // dummy entry preceeds doubly linked list

  n1.value = 100;  // start of doubly linked list
  n1.prev = &n0;
  n1.next = &n2;

  n2.value = 200;
  n2.prev = &n1;
  n2.next = &n3;

  n3.value = 300;
  n3.prev = &n2;
  n3.next = &n4;

  n4.value = 400;
  n4.prev = &n3;
  n4.next = (struct entry *) 0;  // end of linked list

  while ( listPtr != (struct entry *) 0 )
  {
    if ( listPtr != &n0 )  // ignore dummy entry
      printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  return 0;
}