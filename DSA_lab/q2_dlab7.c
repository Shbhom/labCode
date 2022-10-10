// wap to implement stack adt using linked list

/*
 * C Program to Implement a Stack using Linked List
 */
#include <stdio.h>
#include <stdlib.h>

struct node {
  int info;
  struct node *ptr;
} * top, *top1, *temp;

int peep();
void push(int data);
void pop();
void empty();
void display();
void create();

int count = 0;

int main() {
  int no, ch, e;

  printf("\n 1 - Push");
  printf("\n 2 - Pop");
  printf("\n 3 - Top");
  printf("\n 4 - Dipslay");
  printf("\n 5 - Exit");

  create();

  while (1) {
    printf("\n Enter choice : ");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
      printf("Enter data : ");
      scanf("%d", &no);
      push(no);
      break;
    case 2:
      pop();
      break;
    case 3:
      if (top == NULL)
        printf("No elements in stack");
      else {
        e = peep();
        printf("\n Top element : %d", e);
      }
      break;
    case 4:
      display();
      break;
    case 5:
      exit(0);
    default:
      printf(" Wrong choice, Please enter correct choice  ");
      break;
    }
  }
}

/* Create empty stack */
void create() { top = NULL; }

/* Push data into stack */
void push(int data) {
  if (top == NULL) {
    top = (struct node *)malloc(1 * sizeof(struct node));
    top->ptr = NULL;
    top->info = data;
  } else {
    temp = (struct node *)malloc(1 * sizeof(struct node));
    temp->ptr = top;
    temp->info = data;
    top = temp;
  }
  count++;
}

/* Display stack elements */
void display() {
  top1 = top;

  if (top1 == NULL) {
    printf("stack underflow");
    return;
  }

  while (top1 != NULL) {
    printf("%d ", top1->info);
    top1 = top1->ptr;
  }
}

/* Pop Operation on stack */
void pop() {
  top1 = top;

  if (top1 == NULL) {
    printf("\n Error : Trying to pop from empty stack");
    return;
  } else
    top1 = top1->ptr;
  printf("\n Popped value : %d", top->info);
  free(top);
  top = top1;
  count--;
}

int peep() { return (top->info); }
