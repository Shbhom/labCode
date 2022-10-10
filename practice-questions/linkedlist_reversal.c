#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

void dis(struct node *head) {
  struct node *p = head;
  while (p) {
    // printf("beti\n");
    printf("%d\n", p->data);
    p = p->next;
  }
}

struct node *reversal_ele(struct node *head) {
  struct node *p = head;
  int count = 0, i = 0;
  int *arr;
  while (p) {
    count++;
    p = p->next;
  }
  // printf("%d\n", count);
  //  printf("hello\n");
  arr = (int *)malloc(count * sizeof(int));
  p = head;
  while (p) {
    arr[i] = p->data;
    i++;
    p = p->next;
  }
  for (; i < count; i++) {
    printf("%d", *(arr + i));
  }
  printf("\n");
  p = head;
  i--;
  while (p) {
    p->data = arr[i];
    i--;
    p = p->next;
  }
  return head;
}

struct node *reversal_link(struct node *head) {
  struct node *p = head;
  struct node *q, *r;
  while (p) {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  head = q;
  return head;
}

// struct node *reversal_rec(struct node *head, struct node *p, struct node *q)
// {
//   if (p) {
//     reversal_rec(head, p, p->next);
//     p->next = q;
//   } else {
//     head = q;
//   }
//   return head;
// }

int main() {
  struct node *head = (struct node *)malloc(sizeof(struct node));
  struct node *sec = (struct node *)malloc(sizeof(struct node));
  struct node *third = (struct node *)malloc(sizeof(struct node));
  struct node *fourth = (struct node *)malloc(sizeof(struct node));
  head->data = 1;
  head->next = sec;
  sec->data = 4;
  sec->next = third;
  third->data = 3;
  third->next = fourth;
  fourth->data = 4;
  fourth->next = NULL;
  // dis(head);
  // printf("\n");
  // head = reversal_ele(head);
  head = reversal_link(head);
  dis(head);
  return 0;
}
