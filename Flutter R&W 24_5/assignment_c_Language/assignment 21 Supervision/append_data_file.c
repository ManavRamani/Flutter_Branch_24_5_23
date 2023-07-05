/*
    4. C program to append data into a file :
*/

#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char data[50];

    // Open the file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("\n File Not Found...\n");
    }

    printf("\n Enter data to append : ");
    fgets(data, sizeof(data), stdin);

    // Append the data to the file
    fprintf(fp, "%s", data);

    // Close the file
    fclose(fp);

    printf("\n Data appended successfully.\n");
}
