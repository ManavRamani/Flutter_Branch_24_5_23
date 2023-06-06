/* 2. take marks of seven subject from user and find percentage. */

#include <stdio.h>

void main()
{
    int m1, m2, m3, m4, m5, m6, m7, totalMarks;
    float percentage;

    printf("\nEnter marks for subject 1 : ");
    scanf("%d", &m1);

    printf("\nEnter marks for subject 2 : ");
    scanf("%d", &m2);

    printf("\nEnter marks for subject 3 : ");
    scanf("%d", &m3);

    printf("\nEnter marks for subject 4 : ");
    scanf("%d", &m4);

    printf("\nEnter marks for subject 5 : ");
    scanf("%d", &m5);

    printf("\nEnter marks for subject 6 : ");
    scanf("%d", &m6);

    printf("\nEnter marks for subject 7 : ");
    scanf("%d", &m7);

    totalMarks = m1 + m2 + m3 + m4 + m5 + m6 + m7;
    printf("\nTotal Marks : ");

    percentage = totalMarks / 7;
    printf("Percentage: %.2f%%\n", percentage);

}
