/* wap to find palindrome number.get an input from the user and check whether number is palindrome or not*/

#include <stdio.h>

void main()
{
    int n, r, sum = 0, temp;
    
    printf("\nEnter the number : ");
    scanf("%d", &n);
    
    temp = n;
    
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    
    if (temp == sum)
    {
        printf("\n%d : is palindrome number",temp);
    }
    else
    {
        printf("\n%d : is not palindrome",temp);
    }
}