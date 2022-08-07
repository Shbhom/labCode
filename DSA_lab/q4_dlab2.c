#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[5][5] = {{1, 2, 3, 4, 5},
                 {6, 7, 8, 9, 10},
                 {11, 12, 13, 14, 15},
                 {16, 17, 18, 19, 20},
                 {21, 22, 23, 24, 25}};
  // 1st print pattern
  printf("first print\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i > j) {
        printf("%d\n", a[i][j]);
      }
    }
  }
  printf("second print\n");
  // 2nd print pattern
  for (int i = 1; i < 5; i++) {
    for (int j = 0; j < i; j++) {
      printf("%d\n", a[i][j]);
    }
  }

  // 3rd print pattern
  printf("third print\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (j > i) {
        printf("%d\n", a[i][j]);
      }
    }
  }

  // 4th print pattern
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      if (j == 1 ||) {
      }
    }
  }

  return 0;
}
