// Function to concatenate two character arrays

#include <stdio.h>

void concat(char result[], const char str1[], int n1,
						   const char str2[], int n2)
{
	int i, j;

	// copy str1 to result
	for (i = 0; i < n1; ++i)
	{
		result[i] = str1[i];
	}

	// copy str2 to result
	for (j = 0; j < n2; ++j)
	{
		result[n1 + j] = str2[j];
	}
}

int main(int argc, char const *argv[])
{
	void concat(char result[], const char str1[], int n1,
							   const char str2[], int n2);
	const char s1[5] = {'T', 'E', 'S', 'T', ' '};
	const char s2[5] = {'W', 'O', 'R', 'K', 'S'};
	char s3[11];
	int i;

	concat(s3, s1, 5, s2, 5);

	for (i = 0; i < 10; ++i)
	{
		printf("%c", s3[i]);
	}
	printf("\n");

	return 0;
}