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
void removeString(char fulltext[], const int start, const int length)
{
	int i = 0;
	int textLength = stringLength(fulltext);
	char removed[81];
	
	do
	{
		if ( i < start )
		{
			removed[i] = fulltext[i];
		}
		else if ( i >= (start + length) )
		{
			removed[(i - length)] = fulltext[i];
		}
		++i;
	}
	while ( i < textLength );
	removed[i + 1] = '\0';  // terminate string
	text = removed;
}

int main(int argc, char const *argv[])
{
	void removeString(char text[], const int start, const int length);
	int start = 4;
	int length = 6;
	char text[] = "the wrong son under the sun";
	char fulltext = text;

	printf("%s\n", text);
	removeString(fulltext, start, length);
	printf("%s\n", text);

	return 0;
}