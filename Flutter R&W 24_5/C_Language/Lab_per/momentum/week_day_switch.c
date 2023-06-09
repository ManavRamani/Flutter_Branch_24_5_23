/* Write C program use switch statement. Display Monday to Sunday.
Ex. User Input: M
Output: Monday */

#include <stdio.h>

void main()
{
    char input;

    printf("Enter a day of the week (M/T/W/Th/F/S/Su): ");
    scanf("%c", &input);

    switch (input)
    {
        case 'M':
        case 'm':
            printf("%c : Monday\n",input);
            break;
        case 'T':
        case 't':
            printf("%c : Tuesday\n",input);
            break;
        case 'W':
        case 'w':
            printf("%c : Wednesday\n",input);
            break;
        case 'Th':
        case 'th':
            printf("%c : Thursday\n",input);
            break;
        case 'F':
        case 'f':
            printf("%c : Friday\n",input);
            break;
        case 'S':
        case 's':
            printf("%c : Saturday\n",input);
            break;
        case 'Su':
        case 'su':
            printf("%c : Sunday\n",input);
            break;
        default:
            printf("Invalid input\n");
    }
}
