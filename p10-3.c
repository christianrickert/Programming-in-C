#include <stdio.h>

/* There's a bug in the book, as the concat function concatenates
   result[] rather than s3[] (from the main function). Fixed here. */

int main(int argc, char const *argv[])
{
	void concat(char result[], const char str1[],
							   const char str2[]);
	const char s1[] = {"Test "};
	const char s2[] = {"works."};
	char s3[20];

	concat(s3, s1, s2);

	printf("%s\n", s3);

	return 0;
}

// Function to concatenate two characater strings
void concat(char s3[], const char str1[],
					   const char str2[])
{
	int i, j;

	// copy str1 to s3
	for (i = 0; str1[i] != '\0'; ++i)
	{
		s3[i] = str1[i];
	}

	// copy str2 to s3
	for (j = 0; str2[j] != '\0'; ++j)
	{
		s3[i + j] = str2[j];
	}

	// Terminate the concatenated string with a null character

	s3[i + j] = '\0';
}
