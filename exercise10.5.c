#include <stdio.h>
#include <stdbool.h>

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

// function to find a character string in another character string
int findString(const char source[], const char match[])
{
	bool found = true;
	int i = -1;  // start index for search
	int sourceLength = stringLength(source);
	int matchLength = stringLength(match);

	do
	{
		found = true;
		int j = 0;

		for ((i + j); j < matchLength && (i + j) < sourceLength; ++j)
		{
			if ( source[i + j] != match[j] )
				found = false;
		}
		++i;
	}
	while ( !found && i < (sourceLength - matchLength) );

	if ( found )
		return (i - 1);
	else  // not found
		return -1;
}

int main(int argc, char const *argv[])
{
	int findString(const char source[], const char match[]);
	const char source[] = "a chatterbox";
	const char match[] = "hat";

	printf("%i\n", findString(source, match));
	printf("%i\n", findString(source, "hate"));

	return 0;
}