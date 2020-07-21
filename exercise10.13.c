#include <stdio.h>

// function to count the characters in a string
int stringLength(const char string[])
{
    int count = 0;

    while ( string[count] != '\0' )
    {
        ++count;
    }

    return count;
}

// function to convert all lowercase characters in a string into uppercase characters
void uppercase(char string[])
{
    for (int i = 0; i < stringLength(string); ++i)
    {
        if ( string[i] >= 'a' && string[i] <= 'z' )  // lowercase characters only
            string[i] = string[i] - 'a' + 'A';
    }
}

int main(int argc, char const *argv[])
{
    int stringLength(const char string[]);
    void uppercase(char[]);

    char lowercase[] = "lowercase characters";
    printf("%s\n", lowercase);
    uppercase(lowercase);
    printf("%s\n", lowercase);

    return 0;
}