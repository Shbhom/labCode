// write a menu driven program to do the following sorting
// bubble, insertion, selection

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubbleSort(int a[], int n) {
  for (int i = 0; i < n; i++) {
    for (int l = 0; l < n - i - 1; l++) {
      if (a[l] > a[l + 1]) {
        swap(&a[l], &a[l + 1]);
      }
    }
  }
}

void insertion_sort(int a[], int n) {
  for (int j = 1; j < n; j++) {
    int item = a[j];
    int i = j - 1;
    while (item < a[i] && i >= 0) {
      a[i + 1] = a[i];
      i--;
    }
    a[i + 1] = item;
  }
}

void print(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", a[i]);
  }
}

void selection(int a[], int n) {
  int min_ind;
  for (int i = 0; i < n - 1; i++) {
    min_ind = i;
    for (int l = 0; l < n; l++) {
      if (a[l] < a[min_ind])
        min_ind = l;
      swap(&a[min_ind], &a[l]);
    }
  }
}

void mergeSort(int arr[], int l, int h) {
  if (l < h) {
    int m = l + (h - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, h);
    // merge(arr, l, m, h);
  }
}

int main() {
  int a[5] = {17, 6, 5, 89, 41};
  int n = sizeof(a) / sizeof(a[0]);
  int m;
  while (1) {
    printf("Available Choices :\n");
    printf("1: insertSort\n");
    printf("2: SelectionSort\n");
    printf("3: bubbleSort\n");
    printf("4: exit\n");
    printf("Enter your choice :\n");
    scanf("%d", &m);
    switch (m) {
    case 1:
      printf("insertion_sort\n");
      insertion_sort(a, n);
      print(a, n);
      break;
    case 2:
      printf("bubbleSort\n");
      bubbleSort(a, n);
      print(a, n);
      break;
    case 3:
      printf("SelectionSort\n");
      selection(a, n);
      print(a, n);
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("Enter a valid choice");
      break;
    }
  }
  // print(a, n);
  // insertion_sort(a, n);
  // printf("\n");
  // print(a, n);
  // printf("\n");
  // bubbleSort(a, n);
  // print(a, n);
  // printf("\n");
  // selection(a, n);
  // print(a, n);

  return 0;
}
