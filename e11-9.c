// Rewrite of the 'readLine' function from excercise 10.6
// so that it uses a character pointer rather than an array

#include <stdio.h>

int main(int argc, char const *argv[])
{
  char line[81];
  void readLine(char *buffer);

  readLine(line);
  printf("%s\n", line);

  return 0;
}

// Function to read a line of text from the terminal
void readLine(char *buffer)
{
  do
  {
    *buffer = getchar();
    buffer++;
  }
  while ( *(buffer - 1) != '\n' );

  *buffer = '\0';
}
