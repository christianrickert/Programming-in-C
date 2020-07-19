// Program to use the dictionary lookup program

#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char definition[50];
};

// function to compare two strings by alphabetical order
int compareStrings(const char s1[], const char s2[])
{
    int i = 0, order = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
        ++i;
    if ( s1[i] < s2[i] )
        order = -1;  // smaller value, keep at the front
    else if ( s1[i] == '\0' && s2[i] == '\0' )
        order = 0;  // identical values, no change
    else if ( s1[i] > s2[i] )
        order = 1;  // larger value, move towards the end

    return order;
}

// function to swap two dictionary entries
void entrySwap(struct entry dictionary[], int i1, int i2)
{
      struct entry tmp = dictionary[i1];
      dictionary[i1] = dictionary[i2];
      dictionary[i2] = tmp;
}

// function to sort a dictionary, basically a bubble sort algorithm
void dictionarySort(struct entry dictionary[], const int entries)
{
    int i, j;
    int compareStrings(const char s1[], const char s2[]);

    for (i = 0; i < entries; ++i)
    {
        j = 0;
        while ( j < entries && compareStrings(dictionary[i].word, dictionary[j].word) == -1 )
        {
            entrySwap(dictionary, i, j);
            ++j;
        }
    }
}

// function to print a dictionary
void dictionaryPrint(struct entry dictionary[], const int entries)
{
    int i;
    for (i = 0; i < entries; ++i)
    {
        printf("\"%s\" : \"%s\"\n", dictionary[i].word, dictionary[i].definition);
    }
}

int main(int argc, char const *argv[])
{
    struct entry dictionary[100] =
    { {"zucchini", "green banana"},
      {"aubergine", "blue banana"},
      {"banana", "not an apple"},
      {"tomato", "like a potato"},
      {"apple", "fruit"}, };

    int entries = 5;
    void dictionarySort(struct entry dictionary[], const int entries);
    void dictionaryPrint(struct entry dictionary[], const int entries);
    dictionaryPrint(dictionary, entries);
    dictionarySort(dictionary, entries);
    printf("\n");
    dictionaryPrint(dictionary, entries);

    return 0;
}