#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[20], size;

  printf("\nEnter array size : ");
  scanf("%d", &size);

  printf("\nEnter Numbers : ");
  for (int i = 0; i < size; i++)
    scanf("%d", &a[i]);
  printf("\nArray with Unique list  : ");
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5;) {
      if (a[j] == a[i]) {
        for (int k = j; k < size; k++) {
          a[k] = a[k + 1];
        }
        size--;
      } else
        j++;
    }
  }
  for (int i = 0; i < 5; i++) {
    printf("%d", a[i]);
  }
  return 0;
}
