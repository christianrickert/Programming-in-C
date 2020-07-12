// Program to use the dictionary lookup program

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

bool equalStrings(const char s1[], const char s2[])
{
	int i = 0;
	bool areEqual;

	while (s1[i] == s2[i] &&
		   s1[i] != '\0' && s2[i] != '\0' )
		++i;

	if ( s1[i] == '\0' && s2[i] == '\0' )
		areEqual = true;
	else
		areEqual = false;

	return areEqual;
}

// function to look up a word inside a dictionary
int lookup(const struct entry dictionary[],
		   const char search[], const int entries)
{
	int i;
	bool equalStrings(const char s1[], const char s2[]);

	for (i = 0; i < entries; ++i)
	{
		if ( equalStrings(search, dictionary[i].word) )
			return i;
	}

	return -1;
}

int main(int argc, char const *argv[])
{
	const struct entry dictionary[100] =
	{ {"apple", "fruit"},
	  {"banana", "not an apple"},
	  {"zucchini", "green banana"} };

	char word[10];
	int entries = 3;
	int entry;
	int lookup(const struct entry dictionary[], const char search[],
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