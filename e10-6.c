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
		else if ( i >= start )
			source[i] = source[(i + length)];
		++i;
	}
	while ( i < (sourceLength - length) );
	source[i] = '\0';  // terminate string
}

int main(int argc, char const *argv[])
{
	/* arrays are passed by reference, simple dataypes are passed by value */
	void removeString(char text[], const int start, const int length);
	int start = 4;
	int length = 6;
	char text[] = "the wrong son under the sun";

	printf("%s\n", text);
	removeString(text, start, length);
	printf("%s\n", text);

	return 0;
}
