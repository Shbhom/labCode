#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

int main() {
  struct node *head = NULL;
  struct node *sec = NULL;
  struct node *third = NULL;

  head = (struct node *)malloc(sizeof(struct node));
  sec = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head->data = 1;
  head->next = sec;
  return 0;
}
