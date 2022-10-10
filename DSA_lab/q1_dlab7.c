// wap to implement stack adt using array

#include <stdio.h>
#include <stdlib.h>

struct stack {
  int size;
  int top;
  int *a;
};

void push(struct stack *k, int item) {
  if (k->top == k->size) {
    printf("stack overflow\n");
  } else {
    k->top++;
    k->a[k->top] = item;
  }
}

void peep(struct stack *k) { printf("top = %d\n", k->top); }

int pop(struct stack *k) {
  int val = k->top;
  if (k->top == -1) {
    printf("stack underflow\n");
    return -1;
  } else {
    k->top--;
  }
  return val;
}

void disp(struct stack k) {
  for (int i = k.top; i >= 0; i--) {
    printf("%d\n", k.a[i]);
  }
}

int main() {
  struct stack s1;
  s1.size = 5;
  s1.top = -1;
  s1.a = (int *)malloc(s1.size * sizeof(int));
  int ch;

  printf("\n 1 - Push");
  printf("\n 2 - Pop");
  printf("\n 3 - peep");
  printf("\n 4 - Dipslay");
  printf("\n 5 - Exit");

  while (1) {
    printf("\n Enter choice : ");
    scanf("%d", &ch);
    int no;

    switch (ch) {
    case 1:
      printf("Enter data : ");
      scanf("%d", &no);
      push(&s1, no);
      break;
    case 2:
      pop(&s1);
      break;
    case 3:
      peep(&s1);
      break;
    case 4:
      disp(s1);
      break;
    case 5:
      exit(0);
    default:
      printf(" Wrong choice, Please enter correct choice  ");
      break;
    }
  }

  return 0;
}
