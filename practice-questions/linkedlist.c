#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

void display(struct node *head) {
  struct node *q = head;
  while (q != NULL) {
    printf("%d ", q->data);
    q = q->next;
  }
}

struct node *insert_beg(struct node *head, int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = item;
  temp->next = head;
  return temp;
}

struct node *insert_end(struct node *head, int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = item;
  struct node *p = head;
  while (p->next != NULL) {
    p = p->next;
  }
  p->next = temp;
  temp->next = NULL;
  return head;
}

struct node *insert_af(struct node *head, int item, struct node *prev) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = item;
  temp->next = prev->next;
  prev->next = temp;
  return head;
}

// int maxll(struct node *head) {
//   struct node *p = head;
//   int max = INT32_MIN;
//   while (p) {
//     if (p->data > max) {
//       max = p->data;
//       p = p->next;
//     }
//   }
//   return max;
// }

int main() {
  struct node *head = NULL;
  struct node *second = NULL;
  struct node *third = NULL;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  //  display(head);
  //  printf("\n");
  //  head = insert_beg(head, 5);
  //  display(head);
  printf("\n");
  head = insert_end(head, 5);
  display(head);
  //  printf("\n");
  //  head = insert_af(head, 5, second);
  //  display(head);
  //  printf("\n");
  // int g = max(head);
  // printf("%d\n", g);

  return 0;
}
