#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry *findentry(struct entry *listPtr, int match)
{
    while ( listPtr != (struct entry *) 0 )
        if ( listPtr->value == match )
            return (listPtr);
        else
            listPtr = listPtr->next;

    return (struct entry *) 0;
}

int main(int argc, char const *argv[])
{
    struct entry *findentry(struct entry *listPtr, int match);
    struct entry n1, n2, n3;
    struct entry *listPtr, *listStart = &n1;

    int search;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 100;
    n2.next = &n3;

    n1.value = 100;
    n1.next = 0;

    printf("Enter value to locate: ");
    scanf("%i", &search);

    listPtr = findentry(listStart, search);

    if ( listPtr != (struct entry *) 0 )
        printf("Found %i.\n",  listPtr->value);
    else
        printf("Not found.\n");

    return 0;
}
