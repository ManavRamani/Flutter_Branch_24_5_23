/*
    2.WAP to create infinite calc using UDF, switch case :
*/

#include <stdio.h>
int calc(int m, int r, int c);
void main()
{
    int a, b, ch;

    printf("\n 1. +,\n 2. -, \n 3. *, \n 4. / \n");
    printf("\n Enter Any One Number of above option : ");
    scanf("%d", &ch);

    printf("\n\n Enter 1st Value : ");
    scanf("%d", &a);
    printf("\n Enter 2nd Value : ");
    scanf("%d", &b);

    calc(a, b, ch);
}

int calc(int m, int r, int c)
{
    switch (c)
    {
        case 1:
            return printf("\n a + b : %d + %d : %d \n", m, r, m + r);
            break;
        case 2:
            return printf("\n a - b : %d - %d : %d \n", m, r, m - r);
            break;
        case 3:
            return printf("\n a * b : %d * %d : %d \n", m, r, m * r);
            break;
        case 4:
            return printf("\n a / b : %d / %d : %d \n", m, r, m / r);
            break;
        default:
            return printf("\n Pliz Enter Valid Choice....\n");
            break;
    }
}