#include <stdio.h>
#include <math.h>

int main()
{
  int num, sum, temp = num;
  printf("Enter number:");
  scanf("%d", &num);

  while (num > 0)
  {
    int digit = num % 10;
    sum += pow(digit, 3);
    num /= 10;
  }
  if (sum == temp)
    printf("Armstrong");
  else
    printf("Not Armstrong");
  return 0;
}
