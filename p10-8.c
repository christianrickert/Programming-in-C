#include <stdio.h>
#include <stdbool.h>

// Function to check if a character is alphabetic [a-z, A-Z]
bool alphabetic(const char c)
{
	if ( c >= 'a' && c <= 'z' ||
		 c >= 'A' && c <= 'Z')
		return true;
	else
		return false;
}

// Function to read a line of text from the terminal
void readLine(char buffer[])
{
	char character;
	int i = 0;

	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	}
	while ( character != '\n' );
	
	buffer[i - 1] = '\0';
	
}

/* Function to count the number of words in a string */
int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c);

	for (i = 0; string[i] != '\0'; ++i)
	{
		if ( alphabetic(string[i]) )
		{
			if ( lookingForWord )
			{
				++ wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;
	}

	return wordCount;
}

int main(int argc, char const *argv[])
{
	char text[81];
	int totalWords = 0;
	int countWords(const char string[]);
	void readLine(char buffer[]);
	bool endOfText = false;

	printf("Type in your text, then press 'RETURN' twice.\n");

	while ( !endOfText )
	{
		readLine(text);

		if ( text[0] == '\0')  // only works if the returned string was empty
			endOfText = true;
		else
			totalWords += countWords(text);
	}

	printf("\nThere are %i words in the above text.\n", totalWords);

	return 0;
}
