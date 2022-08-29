#include<stdio.h>
int main() {
  int a[5], i, min, max;

  printf("Enter elements in array : ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }

  min = max = a[0];
  for (i = 1; i < 5; i++) {
    if (min > a[i])
      min = a[i];
    if (max < a[i])
      max = a[i];
  printf("minimum of array is : %d", min);
  printf("\nmaximum of array is : %d\n", max);

  return 0;
}
