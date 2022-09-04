#include <stdio.h>
struct stu {
  char name[50];
  int roll;
  int mark[5];
  int totalMarks;
  float pmarks;
};

void grade(struct stu *s, int n) {
  printf("grade of all the students respectively are\n");
  for (int i = 0; i < n; i++) {
    if (s[i].pmarks > 80) {
      printf("grade A\n");
    } else if (s[i].pmarks > 60 && s[i].pmarks <= 80) {
      printf("grade B\n");
    } else if (s[i].pmarks > 40 && s[i].pmarks <= 60) {
      printf("grade C\n");
    } else
      printf("grade D\n");
  }
}

void sort(struct stu *s, int n) {
  int i, j, x, y;
  printf("sorted pmarks of students are:\n");
  for (i = 0; i < n; i++) {
    int a[n];
    int temp;
    for (j = 0; j < n; j++) {
      a[j] = s[i].pmarks;
    }
    for (x = 0; x < n - 1; x++) {
      for (y = x + 1; y < n; y++) {
        if (a[x] > a[y]) {
          temp = a[x];
          a[x] = a[y];
          a[y] = temp;
        }
      }
    }
    for (int k = 0; k < 1; k++) {
      printf("%d ", a[k]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("enter no of students:");
  scanf("%d", &n);
  struct stu s[n];
  int i, j, m;
  printf("Enter details of the students:\n");
  for (i = 0; i < n; i++) {
    printf("Enter first name: \n");
    scanf("%s", s[i].name);
    printf("enter roll number: \n");
    scanf("%d", &s[i].roll);
    printf("Enter marks of 5 subjects: \n");
    for (j = 0; j < 5; j++) {
      scanf("%d", &s[i].mark[j]);
    }
    printf("\n");
  }
  for (i = 0; i < n; i++) {
    s[i].totalMarks = 0;
    s[i].pmarks = 0.0;
    for (m = 0; m < 5; m++) {
      s[i].totalMarks += s[i].mark[m];
    }
    s[i].pmarks = s[i].totalMarks * 0.2;
  }
  grade(s, n);
  sort(s, n);

  return 0;
}
