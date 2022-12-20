#include <stdio.h>
#include <stdlib.h>

int checkIfOperand(char ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
         (ch >= '0' && ch <= '9');
}

int main() {
  int c = checkIfOperand('*');
  printf("%d\n", c);
  return 0;
}
