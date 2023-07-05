/*
    3. C program to write even, odd and prime numbers to separate file :
*/

#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    FILE *evenFile, *oddFile, *primeFile;

    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");
    primeFile = fopen("prime.txt", "w");

    if (evenFile == NULL || oddFile == NULL || primeFile == NULL)
    {
        printf("\n Error opening files.\n");
    }

    int num;

    printf("\n Enter a number (0 to exit): ");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            fprintf(evenFile, "%d\n", num);
        }
        else
        {
            fprintf(oddFile, "%d\n", num);
        }

        if (isPrime(num))
        {
            fprintf(primeFile, "%d\n", num);
        }

        printf("\n Enter a number (0 to exit): ");
        scanf("%d", &num);
    }

    fclose(evenFile);
    fclose(oddFile);
    fclose(primeFile);

    printf("\n Numbers have been written to files.\n");
}
