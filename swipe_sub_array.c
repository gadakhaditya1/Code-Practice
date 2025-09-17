// #include <stdio.h>

// int main()
// {
//   int arr[] = {1, 2, 3, 4, 5, 6};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int index = 3;
//   printf(" array: ");
//   for (int i = index + 1; i < size; i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   for (int i = 0; i < index + 1; i++)
//   {
//     printf("%d ", arr[i]);
//   }

//   return 0;
// }

#include <stdio.h>

int main()

{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  int index = 3;
  printf("arrya: ");
  for (int i = index + 1; i < size; i++)
  {
    printf("%d", arr[i]);
  }
  for (int i = 0; i < index + 1; i++)
  {
    printf("%d", arr[i]);
  }
  return 0;
}