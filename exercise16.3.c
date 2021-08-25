// Write a program to copy one file to another, replacing all
// lowercase characters with their uppercase equivalents.
// Using program16.3.c as template, removing input for reasons
// of simplicity

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    FILE *in, *out;
    int c;

    // open input and output files

    if ( (in = fopen("infile.txt", "r")) == NULL )
    {
        printf("Can't open %s for reading.\n", "infile.txt");
        return 1;
    }
    if ( (out = fopen("outfile.txt", "w")) == NULL )
    {
        printf("Can't open %s for writing.\n", "outfile.txt");
        return 1;
    }

    // copy in to out
    while ( (c = getc(in)) != EOF )
    {
        putc(toupper(c), out);
    }

    // close open files
    fclose(in);
    fclose(out);

    printf("File has been converted from lowercase to uppercase.\n");

    return 0;
}