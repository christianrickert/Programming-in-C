// Function to insert a new entry into a linked list using pointers,
// handles the special case of inserting a new entry before the
// first printed element (the previous first entry of the linked list)

#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *newPtr, struct entry *listPtr)
{
    newPtr->next = listPtr->next;  // link new entry to following entry
    listPtr->next = newPtr;  // insert new entry after current entry
}

int main(int argc, char const *argv[])
{
    void insertEntry(struct entry *newPtr, struct entry *listPtr);
    struct entry n0, n1, n2, n3, n4;
    struct entry *listPtr = &n0;

    n0.next = &n2;  // dummy entry preceeds linked list

    n1.value = 100;  // unlinked element

    n2.value = 200;  // new start of linked list
    n2.next = &n3;

    n3.value = 300;
    n3.next = &n4;

    n4.value = 400;
    n4.next = (struct entry *) 0;  // end of linked list

    insertEntry(&n1, &n0);

    while ( listPtr != (struct entry *) 0 )
    {
        if ( listPtr != &n0 )  // ignore dummy entry
            printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }

    return 0;
}
