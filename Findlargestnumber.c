
#include <stdio.h>
int main()
{
  int a, b;
  printf("enter a number:");

  scanf("%d", &a);
  printf("enter a number:");
  scanf("%d", &b);
  if (a > b)
  {
    printf("large number", a);
  }
  else
  {
    printf("small number", b);
  }
}