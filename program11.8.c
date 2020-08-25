// program to illustrate using pointers and functions

#include <stdio.h>

void test(int *int_ptr)
{
    *int_ptr = 100;
}

int main(int argc, char const *argv[])
{
    void test(int *int_ptr);
    int i = 50, *p = &i;

    printf("Before the call to test i = %i\n", i);
    test(p);
    printf("After the call to test i = %i\n", i);

    return 0;
}
