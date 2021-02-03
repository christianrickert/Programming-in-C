// Create a doubly linked list and print out the elements of the list

#include <stdio.h>

struct entry
{
  int value;
  struct entry *prev;
  struct entry *next;
};

void insertEntry(struct entry *newPtr, struct entry *listPtr)
{
  newPtr->next = listPtr->next;  // link new to following entry
  listPtr->next = newPtr;  // link new after current entry
  newPtr->prev = listPtr;  // link previous to current entry
  newPtr->next->prev = newPtr; // link following to new entry
}

void removeEntry(struct entry *listPtr)
{
  if ( listPtr->prev != (struct entry *) 1 )
    listPtr->prev->next = listPtr->next;  // unlink the current entry
}

int main(int argc, char const *argv[])
{
  void insertEntry(struct entry *newPtr, struct entry *listPtr);
  void removeEntry(struct entry *listPtr);
  struct entry n0, n1, n2, n3, n4;
  struct entry *listPtr = &n0;

  n0.prev = (struct entry *) 1;  // mark beginning of list
  n0.next = &n1;  // dummy entry preceeds doubly linked list

  n1.prev = &n0;
  n1.value = 100;  // start of doubly linked list
  n1.next = &n3;

  n2.value = 200;

  n3.prev = &n1;
  n3.value = 300;
  n3.next = &n4;

  n4.prev = &n3;
  n4.value = 400;
  n4.next = (struct entry *) 0;  // end of linked list

  insertEntry(&n2, &n1);
  removeEntry(&n3);

  while ( listPtr != (struct entry *) 0 )
  {
    if ( listPtr != &n0 )  // ignore dummy entry
      printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  return 0;
}