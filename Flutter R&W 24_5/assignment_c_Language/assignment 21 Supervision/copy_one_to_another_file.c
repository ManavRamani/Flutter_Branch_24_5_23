/*
    5. C program to copy contents from one file to another :
*/

#include <stdio.h>

void main()
{
    FILE *sf, *df;
    char ch;

    // Open the source file in read mode
    sf = fopen("one.txt", "r");
    if (sf == NULL)
    {
        printf("Error opening the source file.\n");
    }

    // Open the destination file in write mode
    df = fopen("2nd.txt", "w");
    if (df == NULL)
    {
        printf("\n File Not found.... \n");
        fclose(sf);
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sf)) != EOF)
    {
        fputc(ch, df);
    }

    // Close the files
    fclose(sf);
    fclose(df);

    printf("Contents copy successfully from one to 2nd.txt.\n");
}
