#include <stdio.h>

int main()
{
  int n, i, j;
  int col;

  printf("Enter row: ");
  scanf("%d", &n);

  printf("enter col:");
  scanf("%d", &col);

  for (i = 1; i <= n; i++)
  {

    for (j = 1; j <= col; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }

  return 0;
}
