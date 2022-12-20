#include <stdio.h>
#include <stdlib.h>

struct node {
  int coeff;
  int pow;
  struct node *next;
};

void createNode(int x, int y, struct node **head) {
  struct node *r, *z;
  z = *head;
  if (z == NULL) {
    r = (struct node *)malloc(sizeof(struct node));
    r->coeff = x;
    r->pow = y;
    *head = r;
    r->next = (struct node *)malloc(sizeof(struct node));
    r = r->next;
    r->next = NULL;
  } else {
    r->coeff = x;
    r->pow = y;
    r->next = (struct node *)malloc(sizeof(struct node));
    r = r->next;
    r->next = NULL;
  }
}

void polyAdd(struct node *poly1, struct node *poly2, struct node *poly) {
  while (poly1->next && poly2->next) {
    if (poly1->pow > poly2->pow) {
      poly->pow = poly1->pow;
      poly->coeff = poly1->coeff;
      poly1 = poly1->next;
    } else if (poly1->pow < poly2->pow) {
      poly->pow = poly2->pow;
      poly->coeff = poly2->coeff;
      poly2 = poly2->next;
    } else {
      poly->pow = poly1->pow;
      poly->coeff = poly1->coeff + poly2->coeff;
      poly1 = poly1->next;
      poly2 = poly2->next;
    }

    poly->next = (struct node *)malloc(sizeof(struct node));
    poly = poly->next;
    poly->next = NULL;
  }
  while (poly1->next || poly2->next) {
    if (poly1->next) {
      poly->pow = poly1->pow;
      poly->coeff = poly1->coeff;
      poly1 = poly1->next;
    }
    if (poly2->next) {
      poly->pow = poly2->pow;
      poly->coeff = poly2->coeff;
      poly2 = poly2->next;
    }
    poly->next = (struct node *)malloc(sizeof(struct node));
    poly = poly->next;
    poly->next = NULL;
  }
}

void removeDuplicates(struct node *start) {
  struct node *ptr1, *ptr2, *dup;
  ptr1 = start;

  /* Pick elements one by one */
  while (ptr1 != NULL && ptr1->next != NULL) {
    ptr2 = ptr1;

    // Compare the picked element
    // with rest of the elements
    while (ptr2->next != NULL) {

      // If powers of two elements are same
      if (ptr1->pow == ptr2->next->pow) {

        // Add their coefficients and put it in 1st element
        ptr1->coeff = ptr1->coeff + ptr2->next->coeff;
        dup = ptr2->next;
        ptr2->next = ptr2->next->next;

        // remove the 2nd element
        free(dup);
      } else
        ptr2 = ptr2->next;
    }
    ptr1 = ptr1->next;
  }
}

struct node *polyMul(struct node *poly1, struct node *poly2,
                     struct node *poly3) {

  // Create two pointer and store the
  // address of 1st and 2nd polynomials
  struct node *ptr1, *ptr2;
  ptr1 = poly1;
  ptr2 = poly2;
  while (ptr1 != NULL) {
    while (ptr2 != NULL) {
      int coeff, power;
      coeff = ptr1->coeff * ptr2->coeff;
      poly3->coeff;
      power = ptr1->pow + ptr2->pow;
      poly3->pow = power;
      poly3->coeff = coeff;
      ptr2 = ptr2->next;
    }
    ptr2 = poly2;
    ptr1 = ptr1->next;
  }
  removeDuplicates(poly3);
  return poly3;
}

void disp(struct node *head) {
  while (head->next != NULL) {
    printf("%dx^%d", head->coeff, head->pow);
    head = head->next;
    if (head->coeff >= 0) {
      if (head->next != NULL)
        printf("+");
    }
  }
}

int main() {
  struct node *poly1 = NULL, *poly2 = NULL, *polyA = NULL, *polyM = NULL;
  createNode(5, 2, &poly1);
  createNode(8, 1, &poly1);
  createNode(1, 0, &poly1);

  createNode(6, 2, &poly2);
  createNode(-7, 0, &poly2);
  disp(poly1);
  printf("\n");
  disp(poly2);
  printf("\n");

  polyA = (struct node *)malloc(sizeof(struct node));
  polyM = (struct node *)malloc(sizeof(struct node));
  polyAdd(poly1, poly2, polyA);
  disp(polyA);
  printf("\n");
  polyM = polyMul(poly1, poly2, polyM);
  // disp(polyM);
  return 0;
}
