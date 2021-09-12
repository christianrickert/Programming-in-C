// Write a program to that merges lines from two files alternatively
// and simply writes the results to stdout. Surplus lines should simply
// be copied to stdout, too.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char outBuffer[81];
    FILE *in, *and;
    int c;

    // open input and output files

    if ( (in = fopen("infile.txt", "r")) == NULL )
    {
        printf("Can't open %s for reading.\n", "infile.txt");
        return 1;
    }
    if ( (and = fopen("andfile.txt", "r")) == NULL )
    {
        printf("Can't open %s for reading.\n", "outfile.txt");
        return 1;
    }

    // read both files until reaching both EOF
    while ( !feof(in) || !feof(and) )
    {
        if ( fgets(outBuffer, 81, in) != NULL )  // don't read past end of file
            printf("%s\n", outBuffer);
        if ( fgets(outBuffer, 81, and) != NULL )
            printf("%s", outBuffer);
    }

    // close open files
    fclose(in);
    fclose(and);

    return 0;
}
