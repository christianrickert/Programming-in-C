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

// function to remove a character string from another character string
void insertString(char text[], char const insert[], const int start, char ext[])
{
	int i = 0, j = 0;
	int textLength = stringLength(text);
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
	while ( i < (textLength + insertLength) );
	ext[i + 1] = '\0';  // terminate string
}

int main(int argc, char const *argv[])
{
	/* arrays are passed by reference, simple dataypes are passed by value */
	void insertString(char text[], const char insert[], const int start, char ext[]);
	int start = 10;
	char text[] = "the wrong son under the sun";
	char insert[] = "per";
	char extText[81];

	printf("%s\n", text);
	insertString(text, insert, start, extText);
	printf("%s\n", extText);

	return 0;
}