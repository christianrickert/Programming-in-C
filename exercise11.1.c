// Function to insert a new entry into a linked list
#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *newPtr, struct entry *posPtr)
{
    struct entry *tmpPtr = newPtr;

    while ( tmpPtr != posPtr && posPtr != (struct entry *) 0 )
    {
        tmpPtr = tmpPtr->next;
    }

}

int main(int argc, char const *argv[])
{
    void insertEntry(struct entry *newPtr, struct entry *listPtr);
    struct entry n1, n2, n3, n4;
    struct entry *listPtr = &n1;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;

    n1.next = &n2;
    n2.next = &n4;
    // n3 is not part of the linked list yet
    n4.next = (struct entry *) 0;  // mark list end with null pointer

    while ( listPtr != (struct entry *) 0 )
    {
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }

    return 0;
}