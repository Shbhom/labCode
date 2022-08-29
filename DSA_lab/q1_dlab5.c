// WAP a menu driven program to create linked list where user will give the
// option for each element
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

void append(struct node **head_ref, int new_data) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));

  struct node *last = *head_ref;

  new_node->data = new_data;

  new_node->next = NULL;

  if (*head_ref == NULL) {
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}
void insertAfter(struct node *prev_node, int new_data) {
  /*1. check if the given prev_node is NULL */
  if (prev_node == NULL) {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct node *new_node = (struct node *)malloc(sizeof(struct node));

  new_node->data = new_data;

  new_node->next = prev_node->next;

  prev_node->next = new_node;
}

void printList(struct node *node) {
  while (node != NULL) {
    printf(" %d ", node->data);
    // printf(" %p ", node->next);
    node = node->next;
  }
}

int main() {
  int n, t;
  char ans;
  printf("enter the number of elements to be entered\n");
  scanf("%d", &t);
  struct node *head = NULL;
  for (int i = 0; i < t; i++) {
    printf("enter the %dth element\n", i);
    scanf("%d", &n);
    append(&head, n);
  }
  printf("want to enter more elements ? \n");
  scanf("%s", &ans);
  // insertAfter(, int new_data)

  printf("Created Linked list is: ");
  printList(head);

  return 0;
}
