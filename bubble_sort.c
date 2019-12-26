#include <stdio.h>
int main()
{
  int arr[100], num, a, b, swap;
  printf("Enter number of elements in the array\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (a = 0; a < num; a++)
    scanf("%d", &arr[a]);
  for (a= 0 ; a < num - 1; a++)
  {
    for (b = 0 ; b < num - a - 1; b++)
    {
      if (arr[b] > arr[db+1])
      {
        swap  = arr[d];
        array[d] = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
  printf("Sorted array\n");
  for (a= 0; a < num; a++)
     printf("%d\n", arr[a]);
  return 0;
}