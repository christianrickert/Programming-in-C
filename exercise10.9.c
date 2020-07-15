#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// function to replace a string in a second string with a third string
bool replaceString(char source[], char s1[], char s2[], char sink[])
{
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
	// and return the start index of the matching string
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

	// function to remove a character string from another character string
	void removeString(char source[], const int start, const int length)
	{
		int i = 0;
		int sourceLength = stringLength(source);
		
		do
		{
			if ( i < start )
			{
				source[i] = source[i];
			}
			else if ( i >= start && start >= 0 )
				source[i] = source[(i + length)];
			++i;
		}
		while ( i < (sourceLength - length) );
		source[i] = '\0';  // terminate string
	}

	// function to remove a character string from another character string
	void insertString(char source[], const char insert[], const int start, char sink[])
	{
		int i = 0, j = 0;
		int sourceLength = stringLength(source);
		int insertLength = stringLength(insert);

		do
		{
			if ( i < start )
			{
				sink[i] = source[i];
			}
			else if ( i >= start && i < (start + insertLength) )
			{
				sink[i] = insert[j];
				++j;
			}
			else if ( i >= (start + insertLength) )
			{
				sink[i] = source[(i - insertLength)];
			}
			++i;
		}
		while ( i < (sourceLength + insertLength) );
		sink[i] = '\0';  // terminate string
	}

	int start = findString(source, s1);
	int length = stringLength(s1);
	removeString(source, start, length);
	insertString(source, s2, start, sink);

	return ( start >= 0 ) ? true : false;
}

int main(int argc, char const *argv[])
{
	bool stillFound = true;
	char text[] = "the wrong son number one under the sun";
	char s1[] = " ";
	char s2[] = "-";
	char extText[81];

	bool replaceString(char source[], char s1[], char s2[], char sink[]);

	printf("%s\n", text);

	while ( stillFound == true)
	{
		stillFound = replaceString(text, s1, s2, extText);
		strcpy(extText, text);  // simple assignment with error
		printf("\n");
		printf("%s\n", extText);
	};


	return 0;
}