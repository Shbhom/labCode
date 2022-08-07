#include <stdio.h>

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int temp, length = 5;

  int i = 0;
  int j = length - 1;

  while (i < j) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }

  printf("Reverse of array: \n");
  for (int i = 0; i < 5; i++) {
    printf("%d,", a[i]);
  }
  printf("\n");
  return 0;
}
