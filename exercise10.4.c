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

// function to extract a portion of a character string
void substring(const char source[], const int start, const int count, char result[])
{
	int i = 0;  // current index
	int sourceLength = stringLength(source);

	do
	{
		if ( i >= start && i < (start + count) )
			result[i - start] = source[i];
		i++;
	}
	while ( i < sourceLength );

	result[i + 1] = '\0';
}

int main(int argc, char const *argv[])
{
	void substring(const char source[], const int start, const int count, char result[]);
	const char source1[] = "character";
	const char source2[] = "two words";
	char result1[80] = {};
	char result2[80] = {};

	substring(source1, 4, 3, result1);
	substring(source2, 4, 20, result2);

	printf("%s\n", result1);  // extract "act"
	printf("%s\n", result2);  // extract "words"

	return 0;
}