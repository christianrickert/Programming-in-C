// Rewrite of the 'compareStrings' function from excercise 10.10
// so that it uses a character pointer instead of arrays

#include <stdio.h>
#include <stdbool.h>

struct entry
{
  char word[15];
  char definition[50];
};

// Function to compare two character strings
int compareStrings(char *s1, char *s2)
{
  int answer;

  while ( *s1 == *s2 &&
          *s1++ != '\0' && *s2++ != '\0' );

  if ( *s1 < *s2 )
    answer = -1;
  else if ( *s1 == *s2 )
    answer = 0;
  else  // *s1 > *s2
    answer = 1;

  return answer;
}

// function to look up a word inside a dictionary
int lookup(struct entry dictionary[],
       char search[], const int entries)
{
  int low = 0;
  int high = entries - 1;
  int mid, result;
  int compareStrings(char *s1, char *s2);
  struct entry *dictPtr;

  while ( low <= high )
  {
    mid = ( low + high ) / 2;
    dictPtr = dictionary + mid;
    result = compareStrings(dictPtr->word, search);

    if ( result == -1 )
      low = mid + 1;
    else if ( result == 1 )
      high = mid - 1;
    else // result == 0
      return mid;  /* return index of match */
  }

  return -1;  /* no match found */
}

int main(int argc, char const *argv[])
{
  struct entry dictionary[100] =
  { {"apple", "fruit"},
    {"banana", "not an apple"},
    {"zucchini", "green banana"} };

  char word[10];
  int entries = 3;
  int entry;
  int lookup(struct entry dictionary[], char search[],
         const int entries);

  printf("Enter word: ");
  scanf("%14s", word);
  entry = lookup(dictionary, word, entries);

  if ( entry != -1 )
    printf("%s\n", dictionary[entry].definition);
  else
    printf("Sorry, the word %s is not in my dictionary.\n", word);

  return 0;
}