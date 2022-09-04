#include <stdio.h>
#include <string.h>

int main() {
  char arr[50];
  int a[26];
  int n;
  for (int i = 0; i < 26; i++) {
    a[i] = 0;
    for (n = 0; n < 50; n++) {
      scanf("%c", &arr[n]);
      if (arr[n] == '\n') {
        n--;
        break;
      }
      if (arr[n] >= 97)
        a[arr[n] - 97]++;
      else
        a[arr[n] - 65]++;
    }
  }
  for (int i = 0; i <= n; i++) {
    if (arr[i] >= 97 && a[arr[i] - 97] > 1)
      printf("%d", i);
    else if (arr[i] >= 65 && arr[i] < 97 && a[arr[i] - 65] > 1)
      printf("%d", i);
    else
      printf("%c", arr[i]);
  }
}
