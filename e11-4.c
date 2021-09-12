// Function to remove an entry from a linked list with a single pointer
// to the element preceeding the element to be removed.
// Handle special case of removing the first element of the list.

#include <stdio.h>

struct entry
{
  int value;
  struct entry *next;
};

void removeEntry(struct entry *listPtr)
{
  // we can't remove the list element pointed to by the argument,
  // because we don't have a doubly linked list with a 'previous'
  // entry that would allow us to fix the linked list afterwards
  if ( listPtr != (struct entry *) 0 )
    listPtr->next = listPtr->next->next;  // unlink the following entry
}

int main(int argc, char const *argv[])
{
  void removeEntry(struct entry *listPtr);
  struct entry n0, n1, n2, n3, n4;
  struct entry *listPtr = &n0;

  n0.next = &n1;  // dummy entry preceeds linked list

  n1.value = 100;  // start of linked list
  n1.next = &n2;

  n2.value = 200;  // element to point to
  n2.next = &n3;

  n3.value = 300;  // element to be removed
  n3.next = &n4;

  n4.value = 400;
  n4.next = (struct entry *) 0;  // end of linked list

  removeEntry(&n2);

  while ( listPtr != (struct entry *) 0 )
  {
    if ( listPtr != &n0 )  // ignore dummy entry
      printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  return 0;
}
