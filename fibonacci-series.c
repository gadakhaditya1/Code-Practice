// #include <stdio.h>

// int main()
// {
//   int a = 0, b = 1, c, i;
//   printf("%d %d", a, b);
//   for (i = 0; i < 15; i++)
//   {
//     c = a + b;
//     printf("%d", c);
//     a = b;
//     b = c;
//   }
//   return 0;
// }
#include <stdio.h>

int main()
{
  int n, i;
  int a = 0, b = 1, c;

  printf("Enter number of terms: ");
  scanf("%d", &n);

    for (i = 0; i < n; i++)
  {
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}
