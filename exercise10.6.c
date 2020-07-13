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
void removeString(char text[], const int start, const int length, char result[])
{
	int i = 0;
	int textLength = stringLength(text);
	
	do
	{
		if ( i < start )
		{
			result[i] = text[i];
		}
		else if ( i >= (start + length) )
		{
			result[(i - length)] = text[i];
		}
		++i;
	}
	while ( i < textLength );
	result[i + 1] = '\0';  // terminate string
}

int main(int argc, char const *argv[])
{
	/* arrays are manipulated by functions, while simple datatypes are not */
	void removeString(char text[], const int start, const int length, char result[]);
	int start = 4;
	int length = 6;
	char text[] = "the wrong son under the sun";
	char result[81];

	printf("%s\n", text);
	removeString(text, start, length, result);
	printf("%s\n", result);

	return 0;
}