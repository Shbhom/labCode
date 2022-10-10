#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};
int largestelement(struct node *head) {
  int max = INT_MIN;
  while (head != NULL) {
    if (max < head->data)
      max = head->data;
    head = head->next;
  }
  return max;
}
int smallestElement(struct node *head) {
  int min = INT_MAX;
  while (head != NULL) {
    if (min > head->data)
      min = head->data;
    head = head->next;
  }
  return min;
}
void push(struct node **head, int data) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = data;
  newnode->next = (*head);
  (*head) = newnode;
}
void printlist(struct node *head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}
int main() {
  struct node *head = NULL;
  push(&head, 10);
  push(&head, 1);
  push(&head, 87);
  push(&head, 43);

  printf("Linked list is: ");
  printlist(head);
  printf("Maximum element in linked list: ");
  int max_element = largestelement(head);
  printf("%d\n", max_element);
  printf("minimum element in the linked list: ");
  int small = smallestElement(head);
  printf("%d\n", small);

  return 0;
}
