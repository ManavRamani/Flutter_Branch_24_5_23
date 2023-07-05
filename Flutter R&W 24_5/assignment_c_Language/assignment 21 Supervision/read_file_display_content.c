/*
    2. C program to read a file and display its contents :
*/

#include<stdio.h>
#include<string.h>

void main()
{
    FILE *rp;
    char content[50];

    rp = fopen("First.txt","r");
    if(rp==NULL)
    {
        printf("\nFile Is Not Founded....\n");
    }
    else
    {
        printf("\n File Founded.... \n");
    }

    fgets(content,50,rp);
    fclose(rp);

    printf("%s",content);

}