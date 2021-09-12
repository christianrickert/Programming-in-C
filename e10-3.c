// Function to determine if a character is alphabetic

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
	if ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' ||
		 c >= '0' && c <= '9' || c == '\'' || c == '-')  // requested by exercise
		return true;
	else
		return false;
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
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go ... again.";
	const char text3[] = "Jaqen H'ghar";
	const char text4[] = "123 and -456.";
	int countWords(const char string[]);

	printf("\"%s\" is %i words.\n", text1, countWords(text1));
	printf("\"%s\" is %i words.\n", text2, countWords(text2));
	printf("\"%s\" is %i words.\n", text3, countWords(text3));
	printf("\"%s\" is %i words.\n", text4, countWords(text4));

	return 0;
}
