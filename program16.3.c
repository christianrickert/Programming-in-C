// Program to copy one file to another

#include <stdio.h>

int main(void)
{
    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    // get file name from user
    printf("Enter name of the file to be copied: ");
    scanf("%63s", inName);  // &inName[0]
    printf("Enter name of the output file: ");
    scanf("%63s", outName);  // &outName[0]

    // open input and output files

    if ( (in = fopen(inName, "r")) == NULL )
    {
        printf("Can't open %s for reading.\n", inName);
        return 1;
    }
    if ( (out = fopen(outName, "w")) == NULL )
    {
        printf("Can't open %s for writing.\n", outName);
        return 1;
    }

    // copy in to out
    while ( (c = getc(in)) != EOF )
    {
        putc(c, out);
    }

    // close open files
    fclose(in);
    fclose(out);

    printf("File has been copied.\n");

    return 0;
}