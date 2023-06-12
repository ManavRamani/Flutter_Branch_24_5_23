/*

        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5

*/

#include <stdio.h>

void main()
{
  int i, j, k;
  int rows = 5;

  for (int i = 5; i >= 1; i--)
  {
    for (int j = 1; j < i; j++)
    {
      printf("   ");
    }
    for (int k = i; k <= 5; k++)
    {
      printf(" %d ", k);
    }

    printf("\n");
  }
}