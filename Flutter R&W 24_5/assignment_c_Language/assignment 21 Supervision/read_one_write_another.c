/*
    1. WAP to read content from one file & write it to another file :
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *sf, *df;
    char ch;

    // Open the source file in read mode
    sf = fopen("one.txt", "r");
    if (sf == NULL)
    {
        printf("\n File Not Founded... \n");
    }

    // Open the destination file in write mode
    df = fopen("2nd.txt", "w");
    if (df == NULL)
    {
        printf("\nFile Not Founded....\n");
        fclose(sf);
    }

    // Read from the one.txt file character by character and write to the 2nd.txt file
    while ((ch = fgetc(sf)) != EOF)
    {
        fputc(ch, df);
    }

    // Close both the files
    fclose(sf);
    fclose(df);

    printf("Content copy successfully from one.txt to 2nd.txt file.\n");

}
