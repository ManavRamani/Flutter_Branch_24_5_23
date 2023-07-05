/*
    1. C program to create a file and write data into file :
*/

#include<stdio.h>
#include<string.h>

void main()
{
    FILE *wp;
    char mgs[50]="hey! \nHow Are You...??\nYou Looking Nice...";

    wp=fopen("First.txt","w");

    if(wp==NULL)
    {
        printf("\n File Not Founded... \n");
    }
    else
    {
        printf("\n File Created / Founded... \n");
    }

    if(strlen(mgs)>0)
    {
        fputs(mgs,wp);
    }
    printf("\n File Updated.... \n");
    fclose(wp);
}