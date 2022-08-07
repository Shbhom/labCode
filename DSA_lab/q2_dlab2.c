#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[20], size, tmp;
  printf("size of the array :");
  scanf("%d", &size);
  printf("\nEnter Numbers : ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }
  // for (int i = 0; i < size; i++) {
  //   printf("%d", a[i]);
  // }
  int cons = 0;
  int max = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] + 1 == a[i + 1])
      cons++;
    else {
      if (cons > max)
        max = cons;
      cons = 0;
    }
  }
  printf("Maximium number of consequitive element  --> %d", max + 1);

  return 0;
}
